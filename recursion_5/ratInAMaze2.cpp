#include <iostream>
using namespace std;
int cnt=0;
void countPaths(int maze[][4],int n,int rowNo,int colNo)
{

	if(rowNo>=n || colNo>=n)
		return;

	if(maze[rowNo][colNo]==0)
		return;

	if(rowNo==n-1 && colNo==n-1)
	{
		cnt++;
		return;
	}
	countPaths(maze,n,rowNo+1,colNo);
	countPaths(maze,n,rowNo,colNo+1);


}
int main()
{


	int maze[][4]={{1,1,1,1},
				   {1,0,0,1},
				   {1,1,0,1},
				   {1,1,1,1}};	

	int n=4;
	countPaths(maze,n,0,0);

	cout<<"No of Ways="<<cnt;
}