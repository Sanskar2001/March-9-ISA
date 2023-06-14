#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>st)
{
	while(!st.empty())
	{
		cout<<st.top()<<endl;
		st.pop();
	}
}

int main()
{
	stack<int>st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);

	/*
		5
		4
		3
		2
		1
	*/


	// cout<<st.top();

	display(st);



}