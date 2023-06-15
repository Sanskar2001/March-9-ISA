#include <iostream>
#include <stack>
using namespace std;

void nextGreater(int* arr,int* ans,int n)
{
	// Brute Force Approach
	// O(n2)
	for(int i=0;i<n;i++)
	{

		// fixed the current ele
		// Look up in the right of this ith element

		bool nextGreaterNotFound=true;
		for(int j=i+1;j<n;j++)
		{
			if(arr[j]>arr[i])
			{
				ans[i]=arr[j];
				nextGreaterNotFound=false;
				break;
			}	
		}

		if(nextGreaterNotFound)
			ans[i]=-1;

	}
}


void nextGreaterUsingStack(int* arr,int* ans,int n)
{

	stack<int>st;

	// Optmisied solution using Stack, Time Complexity= O(n)

	// Traverse the given array from right to left

	for(int i=n-1;i>=0;i--)
	{

		while(!st.empty() && arr[i]>=st.top())
		{
			st.pop();
		}

		ans[i]= ((st.empty()) ? -1 : st.top());

		// (condition) ? statement1 : statement2;

		// if(st.empty())
		// 	ans[i]=-1;
		// else
		// 	ans[i]=st.top();
		st.push(arr[i]);


	}




}

int main()
{

	int arr[]={6,8,0,1,3};
	//         8 -1 1 3 -1

	int n=5;
	int ans[n];

	// nextGreater(arr,ans,n);

	nextGreaterUsingStack(arr,ans,n);

	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<ans[i]<<" ";
	}


}