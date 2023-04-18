#include <iostream>
using namespace std;

int kadane(int arr[],int n)
{
	int currSum=0,maxSum=INT_MIN;

	bool allNegative=true;


	for(int i=0;i<n;i++)
	{
		int currElement=arr[i];

		if(currElement>0)
			allNegative=false;


		if(currElement+currSum>0)
			currSum+=currElement;
		else
			currSum=0;

		maxSum=max(maxSum,currSum);
	}

	if(allNegative)
	{
		// max element will be my answer
		 int maxElement=INT_MIN;

		 for(int i=0;i<n;i++)
		 {
		 	maxElement=max(maxElement,arr[i]);
		 }

		 return maxElement;
	}

	

	return maxSum;
}

int main()
{
	int arr[]={-1,-2,-10,-3,-4};
	int n=5;

	int ans=kadane(arr,n);

	cout<<"max sum= "<<ans<<endl;


}