#include <iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
			bool isPrime=true;
			// checking whether this i is prime or not
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					isPrime=false;
					break;
				}
			}


			if(isPrime)
			cout<<i<<" ";
	}
}