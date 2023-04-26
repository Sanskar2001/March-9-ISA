#include <iostream>
using namespace std;

// n
// n=5
// 5 4 3 2 1

void printDecNos(int n)
{
	for(int i=n;i>=1;i--)
	{
		cout<<i<<" ";	
	}
}

void printDecNosRecursive(int n)
{

	// Base condition
	if(n==0)
	return;

	cout<<n<<" ";
	// making recursive Call
	printDecNosRecursive(n-1);

}
// 5 4 3 2 1 0

// n n-1 n-2 n-3 ......... 1

int main()
{

	int n=5;
	// printDecNos(n);

	printDecNosRecursive(n);
}