

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

struct node *Insert(struct node *root,int key)
{
	if(root==NULL)
	return NewNode(key);
	
	if(root->data>=key)
	    root->left=Insert(root->left,key);
	else if(root->data<=key)
	    root->right=Insert(root->right,key);
	    
	    return root;	
	}
	
	void preorder(struct node *root)
	{
		if(root!=NULL)
		{
		preorder(root->left);
		printf("%d  \n",root->data);
		preorder(root->right);
	}
	}
struct node* Search_Element(struct node *root,int key)
{     int depth=0;
	  if(root->data==key){
	  printf("FOUND KEY %d \n",depth);
	  }
	  
	  
	  if((root->data) < key){
	     return Search_Element(root->right,key);
	    depth=depth+1;  
	   }
	   else {
	        if((root->data)>=key)
	           return Search_Element(root->left,key);
	        else
	           printf("KEY NOT FOUND IN TREE \n");
	        }
	
}
void getmirrorTree(struct node *root){
	if(!root)
		return;
	getmirrorTree(root->left);
	getmirrorTree(root->right);

	struct node *tmp;
	       tmp=root->left;
	root->left=root->right;
   root->right=tmp;

}
void display_trree_data(struct node *root){
   if(root==NULL)
    return;
       //printf("%d\n",root->data);
       display_trree_data(root->left);
       printf("%d\n",root->data);
       display_trree_data(root->right);   
}

int main()
{
	struct node *root=NULL;
	root=Insert(root,50);
	Insert(root,20);
	Insert(root,40);
	Insert(root,30);
	Insert(root,80);
	Insert(root,10);
	
	Levelordertraversal(root);
	//preorder(root);
	//Search_Element(root,171);
	//printf(" FOUND KEY IN TREE %d ",Search_Element(root,11));
	//display_trree_data(root);
	//printf("====mirror===\n");
	//getmirrorTree(root);
	display_trree_data(root);
	
	}
	
