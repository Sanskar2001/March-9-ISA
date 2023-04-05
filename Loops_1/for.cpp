#include <iostream>
using namespace std;

int main()
{

	int n;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cout<<"i="<<i<<endl;
	}


	cout<<"\n\n For loop using pre increment\n";

	for (int i = 0; i < n; ++i)
	{
		cout<<"i="<<i<<endl;
	}









		int i=5;
		int k=2;
		while(i<10)
		{
			cout<<(k++);
			i++;
		}


		int k=2;
		for(int i=5;i<10;i++)
		{
			cout<<(k++);
		}







}