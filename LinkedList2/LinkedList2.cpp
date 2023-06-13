#include <iostream>
using namespace std;
class Node{

	public:
	int data;
	Node* next;

	Node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertAtTail(Node* &head,Node* &tail,int d)
{
	if(head==NULL && tail==NULL)
	{
		Node* newNode=new Node(d);
		head=newNode;
		tail=newNode;
		return;
	}

	Node* newNode=new Node(d);
	tail->next=newNode;
	tail=newNode;

}


Node* getMidNode(Node* head)
{
	// Maintain Two Pointers
	// slow & fast
	// both should start from head
	// speed of fast= 2 x speed of slow
	// fast-> 2 nodes
	// slow-> 1 Node

	Node* slow=head;
	Node* fast=head;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
	}

	return slow;


}


// bool detectCycle(Node* head)
// {
// 	Node* slow=head;
// 	Node* fast=head;

// 	while(fast!=NULL && fast->next!=NULL)
// 	{
// 		slow=slow->next;
// 		fast=fast->next->next;

// 		if(slow==fast)
// 		return true;
// 	}

// 	return false;
// }

Node* detectCycle(Node* head)
{
	Node* slow=head;
	Node* fast=head;

	while(fast!=NULL && fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;

		if(slow==fast)
		return slow;
	}

	return NULL;
}


void removeCycle(Node* &head)
{
	Node* meetNode=detectCycle(head);
	Node* slow=head;
	Node* fast=meetNode;
	Node* prev=NULL;

	while(slow!=fast)
	{
		slow=slow->next;
		prev=fast;
		fast=fast->next;
	}

	prev->next=NULL;

}


void display(Node* head)
{

	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;

	}
}


int main()
{

	Node* head=NULL;
	Node* tail=NULL;


	insertAtTail(head,tail,1);
	insertAtTail(head,tail,2);
	insertAtTail(head,tail,3);
	insertAtTail(head,tail,4);
	insertAtTail(head,tail,5);
	insertAtTail(head,tail,6);
	insertAtTail(head,tail,7);

	// Creating a cycle
	tail->next=head->next->next;

	// Node* midNode=getMidNode(head);

	// cout<<endl<<midNode->data<<endl;


	if(detectCycle(head)!=NULL)
	cout<<"\nCycle Exsists\n";
	else
	cout<<"\n Cycle Does'nt Exsists\n";


	// display(head);
	
	// removeCycle(head);
	// display(head);

	if(detectCycle(head)!=NULL)
	cout<<"\nCycle Exsists\n";
	else
	cout<<"\n Cycle Does'nt Exsists\n";




}