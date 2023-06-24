#include <iostream>
using namespace std;

class ListNode
{
public:
	int val;
	ListNode* next;

	ListNode(int x)
	{
		val=x;
		next=NULL;
	}

};


int length(ListNode* head)
{

	int cnt=0;

	while(head!=NULL)
	{
		head=head->next;
		cnt++;
	}

	return cnt;

}


ListNode* intersectionHelper(ListNode* headA,ListNode* headB,int diff)
{

   // Length of LL A >Length of LL B


	for(int i=0;i<diff;i++)
		headA=headA->next;


	while(headA!=NULL && headB!=NULL)
	{

		if(headA==headB)
		{
			return headA;
		}

		headA=headA->next;
		headB=headB->next;

	}

	return NULL;

}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
{


	int lenA=length(headA);
	int lenB=length(headB);


	if(lenA>lenB)
	{
		// LL A is longer
		int diff=lenA-lenB;

		return intersectionHelper(headA,headB,diff);
	}
	else
	{
		// LL B is longer

		int diff=lenB-lenA;
		return intersectionHelper(headB,headA,diff);
	}


        
}
int main()
{


	ListNode* headA=new ListNode(1);
	headA->next=new ListNode(2);
	headA->next->next=new ListNode(3);
	headA->next->next->next=new ListNode(4);
	headA->next->next->next->next=new ListNode(5);


	ListNode* headB=new ListNode(10);
	headB->next=headA->next->next;
	


	ListNode* intersectionNode=getIntersectionNode(headA,headB);

	cout<<intersectionNode->val<<endl;




}