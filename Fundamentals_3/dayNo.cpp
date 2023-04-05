#include <iostream>
using namespace std;
int main()
{

	// Accept a no from user
	// Print which day of week it is
	int dayNo;

	cin>>dayNo;


	if(dayNo==1)
	cout<<"Sunday";

	else if(dayNo==2)
	cout<<"Monday";

	else if(dayNo==3)
	cout<<"Tuesday";

	else if(dayNo==4)
	cout<<"Wednessday";

	else if(dayNo==5)
	cout<<"Thursday";

	else if(dayNo==6)
	cout<<"Friday";

	else if(dayNo==7)
	cout<<"Saturday";
    
    else
    cout<<"Invalid day No";
}