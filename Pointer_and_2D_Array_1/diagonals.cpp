#include <iostream>
using namespace std;
int main()
{

	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};

	/*
			1 2 3
			4 5 6
			7 8 9

			1 5 9

	*/


	// left diagonal
	// rowNo==colNo

	int n=3;

	for (int i = 0; i < n; ++i)
	{
		for (int j= 0; j < n; ++j)
		{
			if(i==j)
				cout<<arr[i][j]<<" ";
		}
	}

	// right diagonal

	cout<<endl;

	for (int i = 0; i < n; ++i)
	{
		for (int j= 0; j<n; ++j)
		{
			if((i+j)==n-1)
			cout<<arr[i][j]<<" ";
		}
	}
}