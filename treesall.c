#include<stdio.h>
#include<stdlib.h>

struct  node
{
	int data;
	struct  node *left;
	struct node *right;
	
};
void Sizeoftree(struct node *root)
{
  if(root){
  	return root?(1+Sizeoftree(root->left)
  	+Sizeoftree(root->right)):0;	
};


int main()
{
struct  node *root=Newnode(100);
root->left=Newnode(20);
root->right(40);
root->left->left=Newnode(30);
root->left->right=Newnode(10);
root->right->left=Newnode(70);
printf("Sizeoftree=%d",Sizeoftree(root));

	return ;
}