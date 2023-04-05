// Required working hours in a company are 
// 40hrs per week
// If any worker is doing work more than
// 40hrs then he is entitled to a bonus
// at the rate Rs 10 per hours
// For e.g.

// 40
// Bonus=0


// 41
// Bonus=10

// 50 
// Bonus=100
// Accept the no of working hours and print the
//amount of bonus that he is entitled to.

#include<iostream>
using namespace std;
int main()
{
	int workingHrs;
	cout<<"Enter the no of workingHrs:";c
	cin>>workingHrs;


	if(workingHrs<=40)
	cout<<"Not eligible for bonus\n";

	else
	{
		int extraHrs=workingHrs-40;
		int bonus=extraHrs*10;
		// int bonus=(workingHrs-40)*10;
		cout<<"Bonus="<<bonus<<endl;
	}

	return 0;

}



