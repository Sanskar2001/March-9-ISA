#include <iostream>
using namespace std;
int main()
{
	int n=5;

	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<(i);j++)
	// 	cout<<" ";

	// 	// 2*(n-i-1) stars


	// 	for(int j=0;j<=(2*(n-i-1));j++)
	// 	cout<<"*";

	// 	cout<<endl;
	// }

		for(int i=n-1;i>=0;i--)
	{	

		for(int j=0;j<(n-i);j++)
		cout<<" ";

		for(int j=0;j<(2*i+1);j++)
			cout<<"*";

		cout<<endl;

	}


}