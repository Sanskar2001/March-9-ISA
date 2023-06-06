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


void insertionAtHead(Node* &head,Node* &tail,int data)
{
	// Just need info about 3 things
	// head of LL 
	// tail of LL
	// What data needs to be inserted

	if(head==NULL)
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


void display(Node* head)
{
	if(head==NULL)
		return;

	while(head!=NULL)
	{
		cout<<head->data<<"->";
		head=head->next;
	}
	cout<<"NULL";
}

int main()
{
	// Node* head=new Node(10);

	// cout<<head->data<<"\n";
	// cout<<head->next;

	Node* head=NULL;
	Node* tail=NULL;

	insertionAtHead(head,tail,10); //10->NULL
	insertionAtHead(head,tail,20); // 20->10->NULL
	insertionAtHead(head,tail,30); // 30->20->10->NULL
	insertionAtHead(head,tail,40); // 40->30->20->10->NULL

	display(head);


	
	return 0;
}