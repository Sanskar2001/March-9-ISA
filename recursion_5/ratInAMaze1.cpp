#include <iostream>
using namespace std;

bool pathPossible(int maze[][4],int rowNo,int colNo,int n)
{

	if(maze[n-1][n-1]==0)
		return false;

	if(rowNo==n-1 && colNo==n-1)
		return true;

	if(rowNo>=n || colNo>=n)
		return false;

	if(maze[rowNo][colNo]==0)
		return false;

	bool op1=pathPossible(maze,rowNo+1,colNo,n);

	if(op1==true)
	return true;

	else
	return pathPossible(maze,rowNo,colNo+1,n);

}

int main()
{

	int maze[][4]={	{1,1,0,0},
					{1,1,1,1},
					{1,0,0,1},
					{1,1,0,1}
					};

	int n=4;
	if(pathPossible(maze,0,0,n))
	{
		cout<<"Path is possible";
	}

	else
	{
		cout<<"Not possible";
	}
}