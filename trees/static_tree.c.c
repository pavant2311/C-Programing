#include <stdio.h>
#include <stdlib.h>



struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node *NewNode(int value)
{
	struct node *tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=value;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}
