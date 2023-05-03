#include <iostream>
using namespace std;

int sum(int* arr,int currentIdx,int n)
{
	if(currentIdx==n)
		return 0;

	int ans=arr[currentIdx]+sum(arr,currentIdx+1,n);

	return ans;
}
int main()
{
	int arr[]={1,2,3,4};
	int n=4;
	cout<<sum(arr,0,n);
}