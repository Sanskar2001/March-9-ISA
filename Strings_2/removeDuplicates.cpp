// https://hack.codingblocks.com/app/contests/3942/200/problem
#include <iostream>
using namespace std;
void removeDuplicates(char str[])
{
	int n=strlen(str);


	for(int i=0;i<n;i++)
	{
		char ch=str[i];
		cout<<ch;

		// Bypass the duplicate occurences
		while(ch==str[i+1])
		{
			i++;
		}
	}

}
int main()
{
 	char str[100]="aaaabbbccd";

 	removeDuplicates(str);

}