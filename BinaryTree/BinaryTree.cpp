#include <iostream>
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

int main()
{
	// node* root=new node(100);
	// cout<<root->data<<endl;
	// cout<<root->left<<endl;
	// cout<<root->right<<endl;

	node* root=buildTree();

}