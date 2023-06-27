#include<iostream>				// USING RECURSION
#include<cstdlib>
using namespace std;

struct node
{
	int data;
	struct node *left,*right;
};

struct node * create()
{
	int x;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	cout<<"\nEnter Data or press -999 for No more nodes:";
	cin>>x;
	if(x==-999)
		return 0;
	newnode->data=x;
	cout<<"\nEnter Left Node :";
		newnode->left=create();
		cout<<"\tData:"<<newnode->data;
	cout<<"\nEnter Right Node :";
		newnode->right=create();
		cout<<"\tData:"<<newnode->data;	
}
void inorder(struct node *root)
{
	if(root==0)
		return;
	inorder(root->left);
	cout<<"\t"<<root->data;
	inorder(root->right);	
}
void preorder(struct node *root)
{
	if(root==0)
		return;
	cout<<"\t"<<root->data;
	preorder(root->left);
	preorder(root->right);		
}
void postorder(struct node *root)
{
	if(root==0)
		return;
	postorder(root->left);
	postorder(root->right);	
	cout<<"\t"<<root->data;
}
int main()
{
	struct node *root=NULL;
	root=create();
	cout<<"\nPreorder is:";
	preorder(root);
	
	cout<<"\nInorder is:";
	preorder(root);
	
	cout<<"\nPostorder is:";
	postorder(root);
}
