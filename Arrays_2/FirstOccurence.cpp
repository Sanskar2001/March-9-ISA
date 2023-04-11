#include <iostream>
using namespace std;

int main()
{
	int arr[]={1,2,2,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);

	int target=2;
	int s=0,e=n-1,mid;

	while(s<=e)
	{
		mid=(s+e)/2;

		if(arr[mid]==target && arr[mid-1]!=target)
		{
			cout<<"First occurence at index "<<mid<<endl;
			break;
		}

		else if(arr[mid]==target)
		e=mid-1;

		else if(arr[mid]>target)
			e=mid-1;

		else if(arr[mid]<target)
			s=mid+1;


	}



}