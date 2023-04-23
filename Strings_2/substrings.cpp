#include <iostream>
using namespace std;
int main()
{
	char str[100]="Hello";

	int n=strlen(str);


	for(int st=0;st<n;st++)
	{

		for(int en=st;en<n;en++)
		{

			// st and en are fixed
			// Traverse every char b/w st and en

			for(int i=st;i<=en;i++)
			{
				cout<<str[i];
			}

			cout<<endl;


		}
	}
}