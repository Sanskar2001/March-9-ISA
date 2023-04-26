#include <iostream>
using namespace std;

void reverseRows(int arr[][3],int n)
{
	// 0 1 2 
	for (int i = 0; i < n; ++i)
	{
		// for every row s=0 e=n-1
		// s-> first col e->last

		int s=0,e=n-1;

		while(s<=e)
		{
			swap(arr[i][s],arr[i][e]);
			s++;
			e--;
		}
	}

}
void transpose(int arr[][3],int n)
{

	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j <n; ++j)
		{
			swap(arr[i][j],arr[j][i]);
		}
	}

}

void printMatrix(int arr[][3],int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j<n ; ++j)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}



int main()
{

	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n=3;


	reverseRows(arr,n);
	transpose(arr,n);

	printMatrix(arr,n);

}