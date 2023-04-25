#include <iostream>
using namespace std;
int main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};

	// 1 2 3
	// 4 5 6
	// 7 8 9

	// colNo-> 0 to 2

	int colNo=0;
	int n=3;

	while(colNo<n)
	{
		if(colNo%2==0)
		{
			// print top to down
			int rowNo=0;

			while(rowNo<n)
			{
				cout<<arr[rowNo][colNo]<<" ";
				rowNo++;
				//  [rowNo][colNo]
			}
		}

		else 
		{
			int rowNo=n-1;
			// print bottom to up
			while(rowNo>=0)
			{
				cout<<arr[rowNo][colNo]<<" ";
				rowNo--;
			}
		}
		colNo++;
	}
}