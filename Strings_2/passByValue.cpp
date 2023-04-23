#include <iostream>
using namespace std;
void fun(int a)
{
	a=a+5;
	cout<<"Inside fun a="<<a<<endl;
}

void inc(int x)
{
	++x;
}
int main()
{
	// int a=10;
	// fun(a);
	// cout<<"Inside main a="<<a<<endl;

	int b=2;
	inc(b);
	cout<<b;


}