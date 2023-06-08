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

	while(head!=NULL)
	{
		cnt++;
		head=head->next;
	}	


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




void insertionAtKthPosition(Node* &head,Node* &tail,int data,int k)
{


	if(k==0)
	{
		insertionAtHead(head,tail,data);
		return;
	}

	else if(k>=lengthOfLL(head))
	{
		insertionAtTail(head,tail,data);
		return;
	}

	else
	{

		// take k-1 jumps from head

		Node* curr=head;

		for(int i=1;i<=k-1;i++)
		curr=curr->next;

		Node* newNode=new Node(data);
		Node* tmp=curr->next;

		curr->next=newNode;
		newNode->next=tmp;

	}


}


void deleteAtHead(Node* &head,Node* &tail)
{
	// LL IS EMPTY
	if(head==NULL)
	{
		cout<<"Linked List is empty can't delete!!";
		return;
	}
	// IF A SINGLE NODE IS THERE IN LL
	else if(head->next==NULL)
	{
		delete head;
		head=NULL;
		tail=NULL;
	}
	else
	{
		Node* tmp=head;
		head=head->next;
		delete tmp;
	}

}

void deleteAtTail(Node* &head,Node* &tail)
{
	// LL is empty
	if(head==NULL)
	{
		cout<<"Linked List is empty can't delete";
		return;
	}
	// If a single node is there in LL
	else if(head->next==NULL)
	{
		delete head;
		head=NULL;
		tail=NULL;

	}
	// Otherwise if there are many nodes in LL
	else
	{
		Node* curr=head;
		while(curr->next!=tail)
		{
			curr=curr->next;
		}

		curr->next=NULL;
		delete tail;
		tail=curr;
	}
}

void deleteAtKthPosition(Node* &head,Node* &tail,int k)
{

		if(k==0)
		{
			// Delete the node at Head
			deleteAtHead(head,tail);
		}

		else if(k>=lengthOfLL(head))
		{
			deleteAtTail(head,tail);
		}

		else
		{
			// take (k-1) jumps

			Node* curr=head;

			for(int i=1;i<=(k-1);i++)
			curr=curr->next;

			Node* nodeToBeDeleted=curr->next;
			curr->next=nodeToBeDeleted->next;
			delete nodeToBeDeleted;

		}

}


int getKthNode(Node* head,int k)
{
	// Take k jumps

	for(int i=1;i<=k;i++)
	head=head->next;

	
	return head->data;
	// return the value of the kth node
}


void reverseLL(Node* &head,Node* &tail)
{
		if(head==NULL)
		return;

	Node* curr=head;
	Node* prev=NULL;

	while(curr!=NULL)
	{
		Node* save=curr->next;
		curr->next=prev;
		prev=curr;
		curr=save;
	}

	tail=head;
	head=prev;

}



Node* reverseLLHelper(Node* head,Node* tail)
{

	if(head==NULL || head->next==NULL)
		return head;

	Node* shead=reverseLLHelper(head->next,tail);
	Node* curr=shead;

	while(curr->next!=NULL)
	{
		curr=curr->next;
	}
	curr->next=head;
	head->next=NULL;

	
	tail=head;
	head=shead;

	return head;


}



void reverseLLRecursive(Node* &head,Node* &tail)
{
	 Node* newHead=reverseLLHelper(head,tail);

	 tail=head;
	 head=newHead;

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

	// display(head);
	// cout<<"\n";

	insertionAtKthPosition(head,tail,100,1);

	display(head);
	cout<<"\n";
	deleteAtKthPosition(head,tail,2);
	display(head);


	cout<<endl;

	// reverseLL(head,tail);

	reverseLLRecursive(head,tail);
	display(head);

	// cout<<endl<<getKthNode(head,2);

	// deleteAtHead(head,tail);
	// cout<<"\n";
	// display(head);

	// deleteAtHead(head,tail);
	// cout<<"\n";
	// display(head);


	// deleteAtTail(head,tail);
	// cout<<"\n";
	// display(head);




	
	return 0;
}