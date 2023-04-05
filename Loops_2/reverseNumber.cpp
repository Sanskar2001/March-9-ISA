#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	int revNo=0;

	while(n)
	{
		int unitDigit=n%10;
		revNo=revNo*10+unitDigit;
		n=n/10;
	}

	cout<<"Number after reversal="<<revNo<<endl;
}