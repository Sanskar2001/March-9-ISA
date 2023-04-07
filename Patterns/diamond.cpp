#include <iostream>
using namespace std;
int main()
{
	int n=5;

	// Upright Pyramid
		for(int i=0;i<n;i++)
	{	

		for(int j=0;j<(n-i);j++)
		cout<<" ";

		for(int j=0;j<(2*i+1);j++)
			cout<<"*";

		cout<<endl;

	}

	// Inverted Pyramid

		for(int i=n-2;i>=0;i--)
	{	

		for(int j=0;j<(n-i);j++)
		cout<<" ";

		for(int j=0;j<(2*i+1);j++)
			cout<<"*";

		cout<<endl;

	}
}