#include <iostream>
using namespace std;
int main()
{
	char message[200];

	int n;
	cin.getline(message,150,'\n');


	int i=0;

	int upperCaseCount=0,lowerCaseCount=0,digitCount=0;

	// cout<<message;

	while(message[i]!='\0')
	{
		char currentChar=message[i];

		if(currentChar>='a' && currentChar<='z')
			lowerCaseCount++;

		else if(currentChar>='A' && currentChar<='Z')
			upperCaseCount++;

		else if(currentChar>='0' && currentChar<='9')
			digitCount++;

		i++;

	}

	cout<<"Total Number of lower case character="<<lowerCaseCount<<endl;
	cout<<"Total Number of upper case character="<<upperCaseCount<<endl;
	cout<<"Total Number of digits="<<digitCount<<endl;



}