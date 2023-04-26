#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;

	char largestCharArray[100];
	int largestLength=INT_MIN;
	for(int i=0;i<n;i++)
	{

		cout<<"Enter the"<<(i+1)<<" char array:";
		char currentCharArray[100];
		cin.getline(currentCharArray,100,'.');

		int lengthc=strlen(currentCharArray);

	

		if(length>largestLength)
		{
		
			largestLength=strlen(currentCharArray);
			strcpy(largestCharArray,currentCharArray);

		}
	}

	cout<<"Largest Char array is="<<largestCharArray<<endl;
	cout<<"Length of largest char array="<<(largestLength-1)<<endl;
}