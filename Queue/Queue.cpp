#include <iostream>
using namespace std;

class Queue
{
	int* arr;
	int front;
	int rear;
	int capacity;

	public:
	Queue(int cap)
	{
		// cout<<"Constructor Called";
		arr=new int[cap];
		front=-1;
		rear=-1;
		capacity=cap;
	}

	void enQueue(int ele)
	{
		if(front==-1 && rear==-1)
		{
			// when queue is empty
			front++;
			rear++;
			arr[rear]=ele;
			return;
		}

		else if(rear==capacity-1)
		{
			cout<<"Queue Overflow";
			return;
		}

		arr[++rear]=ele;
	}

	void deQueue()
	{
		if(front==-1 && rear==-1)
		{
			cout<<"Queue Underflow";
			return;
		}

		front++; // deletion

		if(front>rear)
		{
			// reset queue to inital state
			front=-1;
			rear=-1;
		}
	}

	int getFront()
	{
		return arr[front];
	}

	bool empty()
	{

		if(front==-1 && rear==-1)
			return true;

		return false;
	}


};

int main()
{

	int size;
	cin>>size;
	Queue q1(size);

	q1.enQueue(10);
	q1.enQueue(20);
	q1.enQueue(30);
	q1.enQueue(40);

	// q1.enQueue(50);
	// cout<<q1.getFront()<<endl;
	// q1.deQueue();
	// cout<<q1.getFront()<<endl;
	// q1.deQueue();
	// cout<<q1.getFront()<<endl;
	// q1.deQueue();
	// cout<<q1.getFront()<<endl;
	// q1.deQueue();

	while(!q1.empty())
	{
		cout<<q1.getFront()<<endl;
		q1.deQueue();
	}

	q1.deQueue();


}