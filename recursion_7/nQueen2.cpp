#include <iostream>
using namespace std;

bool isSafe(int board[][4],int rowNo,int colNo,int n)
{

	// Check the safety of the current Col

	for(int i=rowNo-1;i>=0;i--)
	{
		if(board[i][colNo]==1)
			return false;
	}

	// Check the safety of the left Diagonal

	int i=rowNo-1;
	int j=colNo-1;

	while(i>=0 && j>=0 )
	{
		if(board[i][j]==1)
			return false;

		i--;
		j--;
	}


	// Check the safety of the right Diaognal

	i=rowNo-1;
	j=colNo+1;


	while(i>=0 && j<n)
	{
		if(board[i][j]==1)
			return false;

		i--;
		j++;
	}


	return true;

}


void printBoard(int board[][4],int n)
{
	for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j< n; ++j)
			{
				cout<<board[i][j];
			}

			cout<<"\n";
		}

}


bool nQueens(int board[][4],int currRow,int n)
{
	if(currRow==n)
	{
		printBoard(board,n);
		cout<<"\n";
		return false;
	}

	// To Go to Every Cell in My current Row
	for(int i=0;i<n;i++)
	{
		// is my current cell safe??


		if(isSafe(board,currRow,i,n))
		{
			// To be continued ......

			// rowNo=currRow
			// colNo=i

			// placing the queen at the current cell
			board[currRow][i]=1;


			// Time machine-> Let's check the future can I place
			// remaning queens or not??

			bool canPlaceRemaningQueens=nQueens(board,currRow+1,n);

			if(canPlaceRemaningQueens)
			return true;

			board[currRow][i]=0;

		}
		
	}

	return false;
}

int main()
{
	int board[4][4]={0};
	int n=4;


	// if(nQueens(board,0,n))
	// {
	// 	cout<<"Yes We can place n Queens";
	// }
	// else
	// {
	// 	cout<<"We cannot place n Queens";
	// }

	(nQueens(board,0,n)) ? cout<<"Yes We can Place n Queens\n" : cout<<"No can't place n Queens";

	// int a=12;
	//  (a==12) ? cout<<"Hello" : cout<<"BYe";



}