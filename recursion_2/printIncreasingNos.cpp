#include <iostream>
using namespace std;
void printIncreasingNos(int n)
{
	if(n==0)
		return;

	printIncreasingNos(n-1);
	cout<<n<<" ";
}
int main()
{
	int n=5;

	printIncreasingNos(n);

}