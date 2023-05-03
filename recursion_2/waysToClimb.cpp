#include <iostream>
using namespace std;

int totalWays(int n)
{
	if(n==0)
	return 1;

	if(n<0)
	return 0;

	int ans=totalWays(n-1)+totalWays(n-2)+totalWays(n-3);
	return ans;
}
int main()
{
	int n=4;

	cout<<totalWays(n);
}