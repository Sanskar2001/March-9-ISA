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


void insertionAtHead(Node* head,Node* tail,int data)
{
	// Just need info about 3 things
	// head of LL 
	// tail of LL
	// What data needs to be inserted

	if(head==null)
	{
		// LL is empty
		head=new Node(data);
		tail=head;
	}
	else
	{
		// LL is non empty
		Node* newNode=new Node(data);
		newNode->next=head;
		head=newNode;

	}

}


int main()
{
	// Node* head=new Node(10);

	// cout<<head->data<<"\n";
	// cout<<head->next;

	Node* head=NULL;
	Node* tail=NULL;


	
	return 0;
}