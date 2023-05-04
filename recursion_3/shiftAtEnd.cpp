#include <iostream>
using namespace std;
void shift(int* arr,int idx,int n,int target)
{
	if(idx==n-1)
		return;

	if(arr[idx]==target)
	{
		swap(arr[idx],arr[idx+1]);
	}

	shift(arr,idx+1,n,target);

}
int main()
{
	int arr[]={1,2,3,4,5,6};
	int target=2;
	int n=6;

	shift(arr,0,n,target);


	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}