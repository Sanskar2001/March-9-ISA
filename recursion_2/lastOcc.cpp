#include <iostream>
using namespace std;
int lastOcc(int* arr,int idx,int n,int target)
{
	if(idx==-1)
	return -1;

	if(arr[idx]==target)
	return idx;

	// int ans=lastOcc(arr,idx-1,n,target);

	// return ans;

	return lastOcc(arr,idx-1,n,target);
}
int main()
{
	int arr[]={1,2,2,3,3,3,4,5};
	int n=8;

	cout<<lastOcc(arr,n-1,n,3);

}