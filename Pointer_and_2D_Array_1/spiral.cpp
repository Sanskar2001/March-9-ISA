#include <iostream>
using namespace std;

void spiralPrint(int arr[][4],int n,int m)
{
	int stRow=0,stCol=0,enRow=n-1,enCol=m-1;

	while(stRow<=enRow && stCol<=enCol)
	{
		// 1. STROW
		// 2. ENCOL
		// 3. ENROW
		// 4. STCOL


		// Print Strow

		for(int i=stCol;i<=enCol;i++)
		cout<<arr[stRow][i]<<" ";

		stRow++;


		// Print encol
		for(int i=stRow;i<=enRow;i++)
		cout<<arr[i][enCol]<<" ";

		enCol--;


		// Print enrow
		for(int i=enCol;i>=stCol;i--)
		cout<<arr[enRow][i]<<" ";

		enRow--;

		// PRint stcol
		for(int i=enRow;i>=stRow;i--)
			cout<<arr[i][stCol]<<" ";

		stCol++;
		
	}
}
int main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
	int n=3;

	int mat[][4]={{1,2,3,4},{5,6,7,8},{10,11,12,13}};

	// spiralPrint(arr,n);

	spiralPrint(mat,3,4);


}