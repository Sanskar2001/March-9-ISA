#include <iostream>
using namespace std;

int main()
{
	int a=12;
	
	// refernce variables
	int &y=a;
	++a;
	cout<<"a="<<a;
	cout<<endl<<"y="<<y;



}