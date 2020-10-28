
// spiral order of tree
#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};

struct stack
{	int value;
	struct node *link;
	struct stack *next;	
};

struct stack *s1=NULL;
struct stack *s2=NULL;

struct node *NewNode(int value)
{
	struct node *tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=value;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}

void pop(struct stack **stack)
{	
	struct stack *tmp=*stack;
	printf("--->%d",tmp->value);
	if (tmp!=NULL)
	{
	*stack=tmp->next;
	}
}

void push(struct node *root,struct stack **ss)
{
	if(root==NULL)
	return;
	struct stack *newnode=(struct stack *)malloc(sizeof(struct stack));
	newnode->value=root->data;
	newnode->link=root;
	newnode->next=*ss;
	*ss=newnode;
}

void spiralorderoftree(struct node *root){

	push(root,&s1);
  	while (s1!=NULL || s2!=NULL)
	{
		while(s1!=NULL){
		push(s1->link->right,&s2);		
		push(s1->link->left,&s2);
		pop(&s1);
		}

        while(s2!=NULL)
		{
		push(s2->link->left,&s1);
		push(s2->link->right,&s1);
		pop(&s2);
		}
	
	}
	
}
void display_trree_data(struct node *root)
{
	struct node *tmp = root;
	if(tmp)
	{
		display_trree_data(tmp->left);
		printf("%d-", root->data);
		display_trree_data(tmp->right);
		
	}
}
int main()
{
	struct node *root=NewNode(100);
	root->left=NewNode(40);
	root->right=NewNode(70);
	root->left->right=NewNode(10);
	root->left->right->left=NewNode(30);		
	root->right->left=NewNode(50);
	root->right->left->right=NewNode(80);
	root->right->left->left=NewNode(90);

	spiralorderoftree(root);
   	//display_trree_data(root);
	printf("\n im IN MAIN \n");

	return 0;
}
