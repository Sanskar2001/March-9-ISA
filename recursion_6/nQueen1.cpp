#include <iostream>
using namespace std;

bool isSafe(int board[][4],int rowNo,int colNo)
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

bool nQueens(int board[][4],int currRow,int n)
{
	if(currRow==n)
	{
		return true;
	}

	// To Go to Every Cell in My current Row
	for(int i=0;i<n;i++)
	{
		// is my current cell safe??


		if(isSafe(board,currRow,i))
		{
			// To be continued ......
		}
		isSafe-> rowNo ColNo board


	}
}

int main()
{
	int board[4][4]={0};
	int n=4;




}