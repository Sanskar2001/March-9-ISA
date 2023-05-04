#include <iostream>
using namespace std;

int bsearch(int* arr,int s,int e,int target)
{
	if(s>e)
	return -1; // if target is not found

	int mid=(s+e)/2;

	if(target==arr[mid])
	return mid;
	
	else if(target>arr[mid])
	s=mid+1;
	
	else
	e=mid-1;

	return bsearch(arr,s,e,target);

}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	int target=2;
	cout<<bsearch(arr,0,8,target);
}