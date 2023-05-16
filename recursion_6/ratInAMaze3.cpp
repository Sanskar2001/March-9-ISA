#include <iostream>
using namespace std;

void printMatrix(int mat[][4],int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<mat[i][j];
		}

		cout<<"\n";
	}
	cout<<"\n\n";

}

void printPaths(int maze[][4],int path[][4],int n,int rowNo,int colNo)
{

	if(rowNo>=n || colNo>=n)
		return;

	if(maze[rowNo][colNo]==0)
		return;

	if(rowNo==n-1 && colNo==n-1)
	{
		// print the current path
		path[rowNo][colNo]=1;
		printMatrix(path,n);
		path[rowNo][colNo]=0;
		return;
	}

	path[rowNo][colNo]=1;
	printPaths(maze,path,n,rowNo+1,colNo);
	printPaths(maze,path,n,rowNo,colNo+1);
	path[rowNo][colNo]=0;
	


}
int main()
{


	int maze[][4]={{1,1,1,1},
				   {1,0,0,1},
				   {1,1,0,1},
				   {1,1,1,1}};	

	int path[4][4]={0};

	/*
			0000
			0000
			0000
			0000
	*/

	int n=4;
	printPaths(maze,path,n,0,0);

}