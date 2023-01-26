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
	cout<<"\nEnter Right Node :";
		newnode->right=create();
}
int main()
{
	struct node *root;
	root=NULL;
	root=create();
}
