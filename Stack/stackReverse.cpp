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


	while(!st.empty())
	{

		int topEle=st.top();
		st.pop();
		tmpSt.push(topEle);
	}


	st=tmpSt;

}



void insertAtBottom(stack<int>&st,int ele)
{

	if(st.empty())
	{
		st.push(ele);
		return;
	}

	int topEle=st.top();
	st.pop();
	insertAtBottom(st,ele);
	st.push(topEle);



}


void reverseStackRecursive(stack<int>&st)
{

	if(st.empty())
	{
		return;
	}


	// pop the top ele from stack
	int topEle=st.top();
	st.pop();

	// reverse the remaining stack
	reverseStackRecursive(st);
	// insert this top ele that was poped earlier
	// at bottom
	insertAtBottom(st,topEle);




}


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

	cout<<"Before Reversal:\n";
	display(st);
	cout<<"\n";

	// reverseStack(st);

	reverseStackRecursive(st);

	cout<<"\nAfter Reversal:\n";
	display(st);

	/*
		3
		2
		1
	*/


}