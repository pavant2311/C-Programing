

#include<stdio.h>
#include<stdlib.h>

struct node 
{int data;
	struct node *next;
};

struct node *insert(struct node **root,int data)
{
	struct node *tmp=*root;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	
	
	newnode->data=data;
	newnode->next=NULL;
	
	if(*root==NULL)	
	 *root=newnode;
	 
	 while(tmp->next!=NULL)
	  tmp=tmp->next;
	  
	  tmp->next=newnode;	
	return *root;
}
void printlist(struct node* root)
{
while(root!=NULL)
{
	printf("%d \n",root->data);
 root=root->next;
}	
}

int main()
{
	
	struct node* root=NULL;
	insert(&root,100);
		insert(&root,100);
			insert(&root,100);
	
	
	printlist(root);
	
	return 0;
	
}
