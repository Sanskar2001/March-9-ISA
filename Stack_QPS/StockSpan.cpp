#include <iostream>
#include <stack>
using namespace std;

void stockSpan(int* prices,int n)
{
	stack<int>st;
	int span[n]; // store final ans in this

	for(int i=0;i<n;i++)
	{
		// Traversing days from 0 to n-1

		while(!st.empty() && prices[i]>prices[st.top()])
		{
			st.pop();
		}

		if(st.empty())
		span[i]=i+1;
		else
		span[i]=i-st.top();

		st.push(i);
	}



	for(int i=0;i<n;i++)
	{
		cout<<span[i]<<" ";
	}

}

int main()
{
	int prices[]={85,80,100,60,70,60,65};
	// 			  1   1  3   1  2  1  2
	int n=7;

	stockSpan(prices,n);


}