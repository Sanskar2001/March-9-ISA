#include <iostream>
using namespace std;

int main()
{
	int n=6;

	for(int i=0;i<n;i++)
	{
		// n-i times loop

		for(int j=0;j<(n-i);j++)
		cout<<"*";

		cout<<endl;

	}
}