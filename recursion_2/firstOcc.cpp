#include <iostream>
using namespace std;
int firstOcc(int* arr,int idx,int target,int n)
{
	if(idx==n)
	return -1;
	
	if(arr[idx]==target)
	return idx;

	int ans=firstOcc(arr,idx+1,target,n);

	return ans;
}
int main()
{
	int arr[]={1,2,2,2,3,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);

	int ans=firstOcc(arr,0,3,n);

	cout<<ans;


}