#include <iostream>
using namespace std;
int main()
{
	int i=1;

	while(i<=5)
	{
		if(i==3)
		break;

		cout<<"i="<<i<<endl;

		i++;
	}

	cout<<endl;

	for(int i=0;i<10;i++)
	{
		if(i==7)
			break;

		cout<<"i="<<i<<endl;
	}
}