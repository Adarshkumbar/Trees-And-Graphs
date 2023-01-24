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
//void display(struct node *root)
//{
//	struct node *temp1,*temp2;
//	temp1=temp2=root;
//	if(root== NULL)
//		cout<<"\n!!Empty Tree!!";
//	else
//	{
//		while(temp!=NULL)
//		{
//			
//		}
//	}
//}
int main()
{
	struct node *root;
	root=NULL;
	root=create();
//	display(root);
}