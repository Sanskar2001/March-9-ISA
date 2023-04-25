#include <iostream>
using namespace std;
int main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};


	/*
			1 2 3 
			4 5 6
			7 8 9
	*/
		int n=3;
		for(int row=0;row<n;row++)
		{
			// row is fixed
			for(int col=0;col<n;col++)
				cout<<arr[row][col]<<" ";
		}

		cout<<"\n";


		for(int col=0;col<n;col++)
		{
			for(int row=0;row<n;row++)
				cout<<arr[row][col]<<" ";

		}

	
}