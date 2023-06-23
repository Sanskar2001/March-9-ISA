#include <iostream>
using namespace std;

class CircularQueue
{
	
	int* arr;
	int front;
	int rear;
	int size;
	int capacity;

	public:
	CircularQueue(int cap)
	{
		arr=new int[cap];
		capacity=cap;
		front=0;
		rear=cap-1;
		size=0;
	}

	void push(int ele)
	{
		if(size==capacity)
		{
			cout<<"Overflow!!";
			return;
		}

		// insertion-> rear=(rear+1)%capacity

		rear=(rear+1)%capacity;
		arr[rear]=ele;
		size++;
	}

	void pop()
	{
		if(size==0)
		{
			cout<<"Underflow!!";
			return;
		}

		front=(front+1)%capacity;
		size--;
	}

	bool empty()
	{
		// if(size==0)
		// return true;

		// return false;

		// TERNARY OPERATOR;
		// return (size==0) ? true : false;
	
		return size==0;

	}

	bool isFull()
	{
		return size==capacity;
	}

	int getFront()
	{
		return arr[front];
	}


};



void display(CircularQueue q)
{
	while(!q.empty())
	{
		cout<<q.getFront()<<endl;
		q.pop();
	}
}

int main()
{

	CircularQueue q(5);

	// cout<<q.front<<endl;
	// cout<<q.rear<<endl;
	// cout<<q.size<<endl;
	// cout<<q.capacity<<endl;

	// cout<<q.empty();


	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	// cout<<q.getFront();
	q.pop();
	// cout<<endl<<q.getFront();


	q.push(100);



	// display
	// while(!q.empty())
	// {
	// 	cout<<q.getFront()<<endl;
	// 	q.pop();
	// }

	display(q);

	cout<<q.empty();


	







}