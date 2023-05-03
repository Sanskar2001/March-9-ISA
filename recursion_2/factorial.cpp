#include <iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
	return 1;

	int ans=n*factorial(n-1);

	return ans;
}

int main()
{
	int n=4;

	int ans=factorial(4);

	cout<<ans;
}