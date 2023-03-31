#include <iostream>
using namespace std;
int main()
{
	char ch;

	cin>>ch;

	if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
	cout<<"It is an alphabet";

	else if( ch>='0' && ch<='9')
	cout<<"It is a digit";

	else
	cout<<"It is something else";

	return 0;
}