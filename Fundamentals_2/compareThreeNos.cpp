#include <iostream>
using namespace std;
int main()
{
	// Accept three nos from user

	int a,b,c;

	cin>>a>>b>>c;

	// Print the largest of all the three nos
	// 10 15 45
	// 45



	if(a>b && a>c)
	cout<<"The largest no is "<<a<<endl;

	else if( b>a && b>c )
	cout<<"The largest no is "<<b<<endl;

	else if(a==b && b==c)
	cout<<" all the three nos are equal"<<endl;

	else
	cout<<"The largest no is "<<c<<endl;

	return 0;

}