#include <iostream>
#include <queue>
using namespace std;
class node
{
	public:
	int data;
	node* left;
	node* right;
	node(int val)
	{
		data=val;
		left=NULL;
		right=NULL;
	}
};

 node* buildTree()
{

	int d;
	cin>>d;

	if(d==-1)
	return NULL;

	node* root=new node(d);
	root->left=buildTree();
	root->right=buildTree();

	return root;

}

 int height(node* root)
 {
 	if(root==NULL)
 		return 0;

 	int leftHieght=height(root->left); // hieght of left subtree
 	int rightHieght=height(root->right); // hieght of right subtree


 	return max(leftHieght,rightHieght)+1;

 }

int diameter(node* root)
{
	// O(n2)
	if(root==NULL)
		return 0;

	int d1=diameter(root->left); // diameter of left subtree
	int d2=diameter(root->right); // diameter of right subtree
	int h1=height(root->left); // ht of left subtree
	int h2=height(root->right); // ht of right subtree

	int d3=h1+h2;

	return max(max(d1,d2),d3);

}


class Pair
{

	public:
	int diameter;
	int height;
};

    Pair diameterOptimised(node* root)
   { 
   	  Pair p;

   	  if(root==NULL)
   	  {
   	  		p.diameter=0;
   	  		p.height=0;
   	  		return p;
   	  }


   	 Pair left=diameterOptimised(root->left); // left subtree
   	 Pair right=diameterOptimised(root->right); // right subtree

   	 int h1=left.height;
   	 int h2=right.height;

   	 int d1=left.diameter;
   	 int d2=right.diameter;
   	 int d3=h1+h2;

   	 int d=max(max(d1,d2),d3);
   	 int h=max(h1,h2)+1;

   	 p.diameter=d;
   	 p.height=h;

   	 // p.diameter=max(max(left.diameter,right.diameter),left.height+right.height);
   	 // p.height=max(left.height,right.height)+1;

   	 return p;


   }


void invert(node* root)
{

	if(root==NULL)
		return;


	// Make 2 recursive calls
	// Invert left BTree
	// Invert right BTree
	//Exchange left and right subtrees
	// RETURN ROOT

	invert(root->left);
	invert(root->right);

	node* tmp=root->left;
	root->left=root->right;
	root->right=tmp;

	// swap(root->left,root->right);

}

void preOrder(node* root)
{
	if(root==NULL)
		return;

	cout<<root->data<<" ";
	preOrder(root->left);
	preOrder(root->right);

}


void printAtKthLevel(node* root,int k)
{
	if(root==NULL)
		return;

	if(k==1)
	{
		cout<<root->data<<" ";
		return;
	}


	printAtKthLevel(root->left,k-1);
	printAtKthLevel(root->right,k-1);


}

void bfs(node* root)
{

	queue<node*>q;
	q.push(root);

	while(!q.empty())
	{

		node* curr=q.front();
		cout<<curr->data<<" ";

		if(curr->left!=NULL)
		q.push(curr->left);

		if(curr->right!=NULL)
		q.push(curr->right);


		q.pop();
	}

}


void bfsPrintInNewLine(node* root)
{


	queue<node*>q;
	q.push(root);
	q.push(NULL);



	while(!q.empty())
	{

		node* curr=q.front();
		q.pop();

		if(curr==NULL)
		{
			cout<<endl;

			if(!q.empty())
			q.push(NULL);

		}

		else
		{

			cout<<curr->data<<" ";

			if(curr->left!=NULL)
				q.push(curr->left);

			if(curr->right!=NULL)
				q.push(curr->right);
		}
	}

}



int main()
{

	
	node* root=buildTree();

	// invert(root);

	// preOrder(root);


	// Pair ans=diameterOptimised(root);

	// cout<<"diameter="<<ans.diameter<<endl;
	// cout<<"height="<<ans.height<<endl;


	// printAtKthLevel(root,1);
	// cout<<endl;
	// printAtKthLevel(root,2);
	// cout<<endl;
	// printAtKthLevel(root,3);
	// cout<<endl;

    /*

	int ht=height(root);

	// Levels-> 1 ..... ht

	// Level Order Traversal

	//DFS--> O(n2)
	for(int i=1;i<=ht;i++)
	{
		printAtKthLevel(root,i);
		cout<<endl;
	}

	*/


	// bfs(root);
	bfsPrintInNewLine(root);

}
