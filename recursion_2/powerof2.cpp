#include <iostream>
using namespace std;

int powerof2(int n)
{
	if(n==1)
	return 2;

	int ans=2*powerof2(n-1);
	return ans;
}

int main()
{
	int n=4;

	cout<<powerof2(n);
}