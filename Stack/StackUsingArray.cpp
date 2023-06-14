#include <iostream>
#include <vector>
using namespace std;

// blue print for my stack
class Stack
{
	
	int* arr;
	int top;
	int capacity;

	public:
	Stack(int cap)
	{
		capacity=cap;
		top=-1;
		arr=new int[capacity];
	}


	void push(int ele)
	{
		// top++; //increment top
		// arr[top]=ele;

		if(top==capacity-1)
		{
			cout<<"Stack Overflow!! (Stack is already full)";
			return;
		}
		arr[++top]=ele;
	}

	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is empty!! Can't pop";
			return;
		}

		top--;
	}

	int getTop()
	{

		if(top==-1)
		{
			cout<<"Stack is empty!!";
			return -1;
		}

		return arr[top];
	}

	bool empty()
	{
		if(top==-1)
		return true;

		return false;
	}
};

int main()
{

	// int x=5;
	Stack st(3); // object of class stack 
	// this can be used as a real stack now


	// cout<<st.capacity<<endl<<st.top<<endl;


	st.push(10);
	st.push(20);
	st.push(30);
	// st.push(40);


	// cout<<st.getTop()<<endl;
	// st.pop();
	// cout<<st.getTop()<<endl;
	// st.pop();
	// cout<<st.getTop()<<endl;
	// st.pop();

	// st.pop();

	while(!st.empty())
	{
		cout<<st.getTop()<<endl;
		st.pop();
	}




	//Hide the internal working by making these data members private

	// cout<<st.arr[0]<<endl;
	// cout<<st.arr[1]<<endl;
	// cout<<st.arr[2]<<endl;

	// cout<<st.capacity;
	// cout<<st.top;



}