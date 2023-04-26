#include <iostream>
using namespace std;

bool search(int arr[][3],int target,int n)
{

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(arr[i][j]==target)
				return true;
		}
	}

	return false;

}


int main()
{
	int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};

	int n=3;
	int target=50;

	bool isPresent=search(arr,target,n);

	if(isPresent)
		cout<<"Element found";

	else
		cout<<"Not found";

}