// https://hack.codingblocks.com/app/contests/3942/489/problem

#include <iostream>
using namespace std;

int main()
{
	char str[1000];

	cin>>str;

	for(int i=0;i<strlen(str);i++)
	{
		char currentChar=str[i];

		cout<<currentChar;

		// Print diff b/w currentChar and nextChar 
		if(i!=strlen(str)-1)
		{
			char nextChar=str[i+1];
			cout<<(nextChar-currentChar);
		}
		
	}
}