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


node* search(node* root,int target)
{
	if(root==NULL)
		return NULL;

	if(root->data==target)
		return root;

	// make calls in left and right subtrees

	node* leftAns=search(root->left,target);

	if(leftAns!=NULL)
	return leftAns;

	node* rightAns=search(root->right,target);
	if(rightAns!=NULL)
	return rightAns;


	return NULL;
	

}

 int height(node* root)
 {
 	if(root==NULL)
 		return 0;

 	int leftHieght=height(root->left); // hieght of left subtree
 	int rightHieght=height(root->right); // hieght of right subtree


 	return max(leftHieght,rightHieght)+1;

 }

 int countNode(node* root)
 {
 	if(root==NULL)
 		return 0;

 	int leftCnt=countNode(root->left); // cnt of left subtree
 	int rightCnt=countNode(root->right); // cnt of right subtree

 	return leftCnt+rightCnt+1;

 	// return countNode(root->left)+countNode(root->right)+1;
 }

int main()
{
	// node* root=new node(100);
	// cout<<root->data<<endl;
	// cout<<root->left<<endl;
	// cout<<root->right<<endl;

	node* root=buildTree();

	// node* desiredNode=search(root,3);
	// // cout<<desiredNode->data<<endl;

	// if(desiredNode==NULL)
	// 	cout<<"Not found!!";
	// else
	// cout<<"It is found";

	// preOrder(root);
	// cout<<"\n";
	// inOrder(root);
	// cout<<"\n";
	// postOrder(root);

	cout<<"Hieght of tree="<<height(root)<<endl;
	cout<<"Total no of nodes="<<countNode(root)<<endl;
}