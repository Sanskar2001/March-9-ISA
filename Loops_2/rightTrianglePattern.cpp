#include <iostream>
using namespace std;
int main()
{

	int n=6;

	for(int i=0;i<n;i++)
	{

		for(int j=0;j<(n-i);j++)
		cout<<" ";


		for(int j=0;j<(i+1);j++)
		cout<<"*";
		//Space Printing
		// for(int j=0;j<(n-i);j++)
		// cout<<" ";


		// // Star Printing
		// for(int j=0;j<(i+1);j++)
		// cout<<"*";

		cout<<endl;
	}


}