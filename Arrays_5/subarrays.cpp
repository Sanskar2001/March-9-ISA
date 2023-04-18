#include <iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	int n=4;

	// 1 2 3 4 
	// 0 1 2 3

	// st=0  en-> 0 1 2 3
	//	  1  en-> 1 2 3
	//	  2  en-> 2 3
	//	  3  en->3

	// en-> st to n-1


	for (int st=0;st<n;st++)
	{

		for(int en=st;en<n;en++)
		{
			// st and en both are fixed
			// traverse b/w st and en

			for(int i=st;i<=en;i++)
				cout<<arr[i]<<" ";

			cout<<"\n";
		}
		
	}


}