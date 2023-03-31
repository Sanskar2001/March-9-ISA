#include <iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;

	// aeiou AEIOU

	// if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch==
	// 	'E' || ch=='I' || ch=='O' || ch=='U')
	// 	cout<<"It is a vowel\n";

	// else
	// 	cout<<"Not a vowel\n";

	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
		cout<<"It is a vowel";

	else if( ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		cout<<"It is a vowel";

	else
		cout<<"Not a vowel";

}