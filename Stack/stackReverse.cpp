#include <iostream>
#include <stack>
using namespace std;

void reverseStack(stack<int>&st)
{
	// create a extra stack

	stack<int>tmpSt;

	// Transfer the contents of orignal stack 
	// to this tmpSt and 
	//then st=tmpSt;




}


void display(stack<int>st)
{
	while(!st.empty())
	{
		cout<<st.top();
		st.pop();
	}
}

int main()
{
	stack<int>st;
	st.push(1);
	st.push(2);
	st.push(3);

	cout<<"Before Reversal:\n";
	display(st);
	cout<<"\n";

	reverseStack(st);
	
	cout<<"\nAfter Reversal:\n";
	display(st);

	/*
		3
		2
		1
	*/


}