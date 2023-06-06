#include <iostream>
using namespace std;

class Node
{

    public:
	int data;
	Node* next;

	// constructor of a node
	Node(int d)
	{
		data=d;
		next=NULL;	
	}

};



int main()
{
	Node* head=new Node(10);

	cout<<head->data<<"\n";
	cout<<head->next;
	
	return 0;
}