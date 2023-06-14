#include <iostream>
#include<vector>
using namespace std;

template<typename T>
class Stack
{

	vector<T>v;

	public:
	// push, pop, top

	void push(T ele)
	{
		v.push_back(ele);
	}

	void pop()
	{
		v.pop_back();
	}

	T top()
	{
		// return the last element of vector

		return v[v.size()-1];
	}


	bool empty()
	{
		// size of vector=0 then my stack is empty

		if(v.size()==0)
			return true;

		return false;
	}

	// void display()
	// {

	// 	for(int i=v.size()-1;i>=0;i--)
	// 		cout<<v[i]<<endl;

	// }



};



void display(Stack<int> st)
{

	while(!st.empty())
	{

		cout<<st.top()<<endl;
		st.pop();
	}

}


int main()
{
	Stack<int> st;

	st.push(10);
	st.push(20);
	st.push(30);

	// 30
	// 20
	// 10

	// cout<<st.top()<<endl;

	// st.pop();

	// //20
	// //10

	// cout<<st.top()<<endl;


	// while(!st.empty())
	// {

	// 	cout<<st.top()<<endl;
	// 	st.pop();
	// }


	display(st);


	Stack<char>charSt;

	charSt.push('a');
	charSt.push('b');

	cout<<charSt.top();

	// st.display();

}