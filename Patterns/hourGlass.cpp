#include <iostream>
using namespace std;
int main()
{
	int n=5;

	// Inverted Pyramid

		for(int i=n-1;i>=0;i--)
	{	

		for(int j=0;j<(n-i);j++)
		cout<<" ";

		for(int j=0;j<(2*i+1);j++)
			cout<<"*";

		cout<<endl;

	}

	// Upright Pyramid
		for(int i=1;i<n;i++)
	{	

		for(int j=0;j<(n-i);j++)
		cout<<" ";

		for(int j=0;j<(2*i+1);j++)
			cout<<"*";

		cout<<endl;

	}
}