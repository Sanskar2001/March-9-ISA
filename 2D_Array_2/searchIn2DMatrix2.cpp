#include <iostream>
using namespace std;
// n-> no of rows m->no of cols
bool search(int arr[][4],int n,int m,int target)
{
	for (int i = 0; i < n; i++)
	{
		if(target>=arr[i][0] && target<=arr[i][n-1])
		{
			// target can lie in this row

			int s=0,e=m-1,mid;

			while(s<=e)
			{
				mid=(s+e)/2;

				if(target==arr[i][mid])
					return true;

				else if(target>arr[i][mid])
					s=mid+1;
				else
				  e=mid-1;

			}

		}
	}


	return false;
}

int main()
{
	int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	/*
			1 2  3   4
			5 6  7   8
			9 10 11 12
	*/

	int target=15;

	  if(search(arr,3,4,target))
	  	cout<<"Element found";

	  else
	  	cout<<"Not found";


}