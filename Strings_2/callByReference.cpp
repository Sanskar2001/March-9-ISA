#include <iostream>
using namespace std;

void changeValue(int &x)
{
	++x;
}
int main()
{
	int a=10;
	changeValue(a);
	cout<<a;
}