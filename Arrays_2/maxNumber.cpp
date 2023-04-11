#include <iostream>
using namespace std;
int main()
{
		int arr[4]={10,24,2,50};
		int n=4;

		int maxNo=INT_MIN;


		for(int i=0;i<n;i++)
		{
			if(maxNo<arr[i])
				maxNo=arr[i];
		}

		cout<<"Maximum Element of this Array is: "<<maxNo<<endl;


		int minNo=INT_MAX;

		// 0->1->2->3
		for(int i=0;i<n;i++)
		{
			if(arr[i]<minNo)
				minNo=arr[i];
		}

		cout<<"Minimum Element of this Array is: "<<minNo;
}