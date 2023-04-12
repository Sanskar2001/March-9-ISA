#include <iostream>
using namespace std;
int main()
{
	int arr[]={10,5,1,6,8};
	int n=5;

	// First element is sorted

	for(int i=1;i<n;i++)
	{
		int currElement=arr[i];

		int j=i-1;

		while(j>=0 && currElement<arr[j])
		{
			arr[j+1]=arr[j];
			j--;
		}

		arr[j+1]=currElement;
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
}