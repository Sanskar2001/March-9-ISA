#include <iostream>
using namespace std;
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
	transpose(arr,n);
	printMatrix(arr,n);



}