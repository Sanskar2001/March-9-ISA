#include <iostream>
#include <queue>
using namespace std;

void display(queue<int>q)
{
	while(!q.empty())
	{
		cout<<q.front()<<endl;
		q.pop();

	}
}

int main()
{
	queue<int>q;

	q.push(10);
	q.push(20);
	q.push(30);


	// q.pop();
	// cout<<q.front()<<endl;

	display(q);

	// while(!q.empty())
	// {
	// 	cout<<q.front()<<endl;
	// 	q.pop();

	// }
	cout<<q.empty();
}