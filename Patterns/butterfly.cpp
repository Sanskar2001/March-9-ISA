#include <iostream>
using namespace std;
int main()
{
	int n=5;


	// First Half
	for(int i=0;i<n;i++)
	{
		// Print i+1 stars
		for(int j=0;j<(i+1);j++)
		cout<<"*";	


		// Print 2*(n-i) spaces
		for (int j = 0; j <(2*(n-i)); ++j)
		cout<<" ";


		// Print i+1 stars
		for(int j=0;j<(i+1);j++)
			cout<<"*";

		cout<<endl;
	}


	 //Second Half

	for(int i=0;i<n;i++)
	{	


		// Print n-i stars
		for(int j=0;j<(n-i);j++)
		cout<<"*";

		

	   // Print 2*(i+1) spaces
		for(int j=0;j<2*(i+1);j++)
		cout<<" ";



		//Print n-i stars

		for(int j=0;j<(n-i);j++)
			cout<<"*";

		cout<<endl;


	}
















}