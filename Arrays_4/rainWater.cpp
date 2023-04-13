#include <iostream>
using namespace std;

int trap(int *hieght,int n)
{
	int leftMax[n],rightMax[n];

	leftMax[0]=0;
	rightMax[n-1]=0;
	for(int i=1;i<n;i++)
	{
		leftMax[i]=max(leftMax[i-1],hieght[i-1]);

	}

	for(int i=n-2;i>=0;i--)
	{
		rightMax[i]=max(rightMax[i+1],hieght[i+1]);
	}

	// for (int i = 0; i < n; ++i)
	// {
	// 	cout<<rightMax[i]<<" ";
	// }

	int totalWater=0;

	for(int i=0;i<n;i++)
	{
		int currentWater= min(rightMax[i],leftMax[i])-hieght[i];

		if(currentWater>0)
			totalWater+=currentWater;
	}


	return totalWater;
}

int main()
{
	int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);

	cout<<trap(arr,n);



}