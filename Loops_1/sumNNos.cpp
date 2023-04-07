#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"How many numbers do you want to enter?";
	cin>>n;


  // Accept n numbers from user



	int sum=0;
	for(int i=0;i<n;i++)
	{
		int no;
		cin>>no;

		sum+=no;

	}
	cout<<"sum="<<sum<<endl;

	return 0;


}