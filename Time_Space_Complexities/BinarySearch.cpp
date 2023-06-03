#include <iostream>
using namespace std;

int main()
{
	int arr[]={1,2,5,7,10,14};

	int n=sizeof(arr)/sizeof(arr[0]);
	int targetElement=10;


	int s=0,e=n-1,mid;

	while(s<=e)
	{
		mid=(s+e)/2;

		if(targetElement==arr[mid])
		{
			cout<<"Element found at"<<mid;
			break;
		}

		else if(targetElement>arr[mid])
		{
			s=mid+1;
		}
		else
		e=mid-1;
	}

	// Time Complexity-> O(logn)


}