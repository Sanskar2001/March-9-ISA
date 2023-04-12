#include<iostream>
using namespace std;

int main()
{
	int arr[]={10,4,20,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);

	// n rounds
	for(int i=0;i<n;i++)
	{
		bool isSorted=true;
		// IN EVERY ROUND COMPARE CONSECUTIVE VALUES
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{	
				isSorted=false;
				swap(arr[j],arr[j+1]);
			}


		}
		if(isSorted)
			break;
			
	}

	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
}