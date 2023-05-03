#include <iostream>
using namespace std;

int powerof2(int n)
{
	if(n==0)
	return 1;

	if(n==1)
		return 2;


	

	int halfPower=powerof2(n/2);

	int ans=halfPower*halfPower;

	if(n%2!=0)
		ans*=2;

	return ans;
}

int main()
{
	int n=1;
	cout<<powerof2(n);

}