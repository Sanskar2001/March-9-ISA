#include <iostream>
using namespace std;

int main()
{
	cout<<"enter the size of array:";
	int n;
	cin>>n;
	int arr[n];


	for(int i=0;i<n;i++)
	{
		cout<<"Enter "<<i<<"ith ele:";
		int ele;
		cin>>ele;
		arr[i]=ele;
	}

	cout<<endl;
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	
}