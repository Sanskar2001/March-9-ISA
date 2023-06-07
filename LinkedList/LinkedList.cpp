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

int lengthOfLL(Node* head)
{
	int cnt=0;




	return cnt;
}


/*

If we do not maintain a tail pointer 
Then to insert a new node at tail position
We need to first go till the tail node and
then insert my new node.

This will take O(n)
void insertionAtTail(Node* &head,int data)
{

	if(head==NULL)
	{
		Node* newNode=new Node(data);
		head=newNode;
		return;
	}

	else
	{
		Node* currNode=head;

		while(currNode->next!=NULL)
		{
			currNode=currNode->next;
		}
		currNode->next=new Node(data);


		// O(n)

	}

}

*/


// Optimise Insertion At Tail O(1)
// If we maintain head and tail pointers both
// Then we can simply insert a new node at Tail in O(1)
void insertionAtTail(Node* &head,Node* &tail,int data)
{

	if(head==NULL)
	{
		Node* newNode=new Node(data);
		head=newNode;
		tail=newNode;
		return;
	}


	else
	{
		Node* newNode=new Node(data);
		tail->next=newNode;
		tail=newNode;
	}
}



int main()
{
	// Node* head=new Node(10);

	// cout<<head->data<<"\n";
	// cout<<head->next;

	Node* head=NULL;
	Node* tail=NULL;

	// insertionAtHead(head,tail,10); //10->NULL
	// insertionAtHead(head,tail,20); // 20->10->NULL
	// insertionAtHead(head,tail,30); // 30->20->10->NULL
	// insertionAtHead(head,tail,40); // 40->30->20->10->NULL


	insertionAtTail(head,tail,10); //10->NULL
	insertionAtTail(head,tail,20); // 10->20->NULL
	insertionAtTail(head,tail,30); // 10->20->30->NULL

	display(head);


	
	return 0;
}