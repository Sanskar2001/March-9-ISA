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

void preOrder(node* root)
{
	if(root==NULL)
		return;

	cout<<root->data <<" ";
	preOrder(root->left);
	preOrder(root->right);
}
void inOrder(node* root)
{
	if(root==NULL)
		return;

	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}

void postOrder(node* root)
{
	if(root==NULL)
		return;


	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

int main()
{
	// node* root=new node(100);
	// cout<<root->data<<endl;
	// cout<<root->left<<endl;
	// cout<<root->right<<endl;

	node* root=buildTree();

	preOrder(root);
	cout<<"\n";
	inOrder(root);
	cout<<"\n";
	postOrder(root);
}