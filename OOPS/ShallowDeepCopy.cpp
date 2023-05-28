#include <iostream>
using namespace std;

class Student
{
	public:
	char* name;
	int rollNo;
	int marks;

	Student(char* n,int r,int m)
	{
		strcpy(name,n);
		rollNo=r;
		marks=m;
	}

	// Copy Constructor

	Student(Student &s)
	{

		char* ch=new char[100];
		strcpy(ch,s.name);
		name=ch;
		rollNo=s.rollNo;
		marks=s.marks;
	}

	// Pass By Value



};

int main()
{

	Student s("XYZ",25,19);



	// Student s2=s; // Copy Constructor

	Student s2(s); // Invoking Copy Constructor


	s.name[0]='A';
	s.marks=40;

	cout<<s.name<<"\n"<<s.rollNo<<"\n"<<s.marks<<"\n";
	cout<<s2.name<<"\n"<<s2.rollNo<<"\n"<<s2.marks<<"\n";






}