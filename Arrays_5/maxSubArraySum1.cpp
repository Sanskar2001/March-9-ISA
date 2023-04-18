#include <iostream>
using namespace std;
int main()
{

		int arr[]={1,2,3,4};
		int n=4;

		int maxSum=INT_MIN;

		for(int st=0;st<n;st++)
		{
			for(int en=st;en<n;en++)
			{
				int currSum=0;
				for(int i=st;i<=en;i++)
				{
					// cout<<arr[i]<<" ";
					currSum+=arr[i];
				}
				// cout<<" sum="<<currSum<<"\n";
				maxSum=max(maxSum,currSum);
			}
		}

		cout<<"Maximum subarray sum is "<<maxSum;
}