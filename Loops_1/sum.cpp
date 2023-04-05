#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;

	int i=0;
	int sum=0;

	while(i<n)
	{
		int number;
		cin>>number;

		// sum=sum+number;
		sum+=number;
		i++;
	}

	cout<<"Sum of all the nos is: "<<sum<<"\n";

	return 0;
}