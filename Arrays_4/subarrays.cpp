#include <iostream>
using namespace std;
int main()
{

	int arr[]={1,2,3,4};
	int n=4;

	// generate all the subarrays

	for(int st=0;st<n;st++)
	{
		for(int en=st;en<n;en++)
		{
			// st and en points are successfully picked up

			for(int i=st;i<=en;i++)
				cout<<arr[i]<<" ";

			cout<<"\n";

		}
	}
}