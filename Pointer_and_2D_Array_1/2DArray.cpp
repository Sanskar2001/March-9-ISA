#include <iostream>
using namespace std;
int main()
{
	int arr[3][3]={{1,2,3},
					{4,5,6},
					{7,8,9}};


	// int myarr[][3]={{1,2,3},{4,5,6}};



					// rowNo->0 1 2
					// i->0 to 2
					// for(i=0 to 2)

					// colNo-> 0 1 1
					// j->0 to 2
					// for(j=0 to 2)

	// for(int i=0;i<3;i++)
	// {
	// 	// row no i.e. i is fixed

	// 	for(int j=0;j<3;j++)
	// 	{
	// 		// col no is fixed
	// 		// row no i.e. i and col no i.e. j 
	// 		cout<<arr[i][j]<<" ";
	// 	}

	// 	cout<<endl;

	// }

	// taking input in a 2d array

	int n;
	cout<<"Enter size of 2d array:";
	cin>>n;
	int twoDArray[n][n];
	for(int i=0;i<n;i++)
	{
	
		for(int j=0;j<n;j++)
			cin>>twoDArray[i][j];

	}


	cout<<"You have entered:\n";
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout<<twoDArray[i][j]<<" ";
		}
		cout<<"\n";
	}




}