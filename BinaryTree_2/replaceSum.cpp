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

int replaceSum(node* root)
{
	if(root==NULL)
	return 0;
	
	if(root->left==NULL && root->right==NULL)
		return root->data;

	int leftSum=replaceSum(root->left);
	int rightSum=replaceSum(root->right);

	int tmp=root->data;
	root->data=leftSum+rightSum;

	return leftSum+rightSum+tmp;


}

int main()
{
	node* root=buildTree();

	replaceSum(root);
	preOrder(root);





}