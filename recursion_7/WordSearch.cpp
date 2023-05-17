#include <iostream>
using namespace std;

// x-> rowNo  y-> colNo
bool wordSearch(string board[],string word,int pos,int x,int y,int n,int m)
{

	if(x>=n || x<0 || y>=m || y<0 )
		return false;


	if(pos==word.length()-1 && board[x][y]==word[word.length()-1])
		return true;


	if(board[x][y]!=word[pos])
		return false;


	char ch=board[x][y];
	board[x][y]='#'; // current cell is marked visited

	// Need look in all the four directions
	// Up
	// Down
	// Left

	// UP
	bool op1=wordSearch(board,word,pos+1,x-1,y,n,m);


	// DOWN
	bool op2=wordSearch(board,word,pos+1,x+1,y,n,m);


	// LEFT
	bool op3=wordSearch(board,word,pos+1,x,y-1,n,m);


	//RIGHT
	bool op4=wordSearch(board,word,pos+1,x,y+1,n,m);

	board[x][y]=ch; // backtracking

	return op1 || op2 || op3 || op4;

}


int main()
{

	// ["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]

	// A B C E
	// S F C S
	// A D E E

	string board[]={"ABCE","SFCS","ADEE"};

	int n=3,m=4;

	// nXm -> dimensions of board

	string word="SEED";



	bool wordFound=false;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{

			if(wordSearch(board,word,0,i,j,n,m))
			{
				wordFound=true;
				break;
			}
		}
	}


	(wordFound) ? cout<<"Word Found!! " : cout<<"Not Found!!";

	// char board2[][4]={ {'A','B','C','E'}, 
	// 				  {'S','F','C','S'}, 
	// 				  {'A','D','E','E'}

	// 				};
}