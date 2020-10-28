#include<stdio.h>
#include<stdlib.h>

struct  node
{
	int data;
	struct  node *left;
	struct node *right;
	
};
void preorder(struct node *root)
	{
		if(root!=NULL)
		{
		preorder(root->left);
		printf("%d  \n",root->data);
		preorder(root->right);
	}
}
int Sizeoftree(struct node *root)
{
  
  	return root?(1+Sizeoftree(root->left)+Sizeoftree(root->right)):0;	
}

struct node *Newnode(struct node *root,int data)
{
	
	struct node *tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=data;
	tmp->right=NULL;
	tmp->left=NULL;
	return tmp;
}


int main()
{
struct  node *root=NULL;
root=Newnode(root,100);
root->left=Newnode(root,20);
root->right=Newnode(root,100);
root->left->left=Newnode(root,30);
root->left->right=Newnode(root,10);
root->right->left=Newnode(root,70);
printf("Sizeoftree=%d\n",Sizeoftree(root));
preorder(root);
return 0;
}