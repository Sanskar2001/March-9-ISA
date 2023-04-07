#include <iostream>
using namespace std;
int main()
{
	int n=4;

	int x=1;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<(i+1);j++)
		{
			cout<<x<<" ";
			x++;

		}

		cout<<endl;
	}



	// int y=1;

	// for(int i=1;i<=n;i++)
	// {

	// 	for(int j=1;j<=i;j++)
	// 		cout<<(y++)<<" ";

	// 	cout<<endl;
	// }


}