#include <iostream>
using namespace std;
bool isSorted(int* arr,int currIdx,int n)
{

	if(currIdx==n-1)
		return true;

	if(arr[currIdx]>arr[currIdx+1])
		return false;

	currIdx=0
	return isSorted(arr,currIdx+1,n);
}
int main()
{
	int arr[]={1,2,30,4,5};
	int n=5;

	if(isSorted(arr,0,n))
		cout<<"Sorted";
	else
		cout<<"Unsorted";

}