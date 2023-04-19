#include <iostream>
using namespace std;
int main()
{
	char str[10]="Hello";
	char ch[10];

	// Copy str into ch

	// int i=0;

	// while(str[i]!='\0')
	// {
	// 	char currentChar=str[i];
	// 	ch[i]=currentChar;
	// 	i++;
	// }
	// // ch[i]='\0';

	strcpy(ch,str); 
	cout<<ch;



}