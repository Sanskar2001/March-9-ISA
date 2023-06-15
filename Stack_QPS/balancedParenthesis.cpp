#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string str)
{

	stack<char>st;

	for(int i=0;i<str.length();i++)
	{

		// if we encounter an opening bracket
		// then to push it to stack
		if(str[i]=='(' || str[i]=='{' || str[i]=='[')
		{
			st.push(str[i]);
		}
		else if(str[i]==')')
		{
			if(st.empty() || st.top()!='(')
			return false;

			st.pop();
				
		}
		else if(str[i]==']')
		{
			if(st.empty() || st.top()!='[')
				return false;

			st.pop();


		}
		else if(str[i]=='}')
		{

			if(st.empty() || st.top()!='{')
				return false;

			st.pop();
		}

	}

	if(st.empty())
	return true;

	return false;

}

int main()
{

	string str="{()}[]}";


	if(isBalanced(str))
	cout<<"Expression is balanced";
	
	else
	cout<<"Expression is unbalanced";


}