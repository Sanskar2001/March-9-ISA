#include <iostream>
using namespace std;

void rotate(char str[],int sp)
{
	int n=strlen(str);

	// Step 1: Shift all the characters to right by sp places
	for(int i=n-1;i>=0;i--)
	{
		str[i+sp]=str[i];
	}
	// cout<<str;

	// Step 2: Shift the last sp chars to the start

	n=strlen(str);

	int i=n-sp,j=0;
	while(i<n)
	{
		str[j]=str[i];
		i++;
		j++;
	}

	str[n-sp]='\0';

	cout<<endl<<str;

}
int main()
{
	char str[100]="Hello";

	rotate(str,3);
}