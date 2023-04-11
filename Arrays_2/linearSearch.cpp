#include <iostream>
using namespace std;
int main()
{
	int arr[]={10,4,5,1,7};
	int n=sizeof(arr)/sizeof(arr[0]);

	int target=5;


	for(int i=0;i<n;i++)
	{

		if(arr[i]==target)
		{
			cout<<"Element found at "<<i;
			break;
		}

	}
}