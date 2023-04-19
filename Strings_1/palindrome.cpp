#include <iostream>
using namespace std;
int main()
{
	char str[100];
	cin>>str;

	bool isPalindrome=true;


   int i=0,j=strlen(str)-1;



	while(i<j)
	{
		if(str[i]!=str[j])
		{
			isPalindrome=false;
			break;
		}
		i++;
		j--;
	}


	if(isPalindrome)
	cout<<"Given string is a palindrome";
	else
	cout<<"Not a palindrome";


}