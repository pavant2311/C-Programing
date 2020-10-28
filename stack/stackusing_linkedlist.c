#include<stdio.h>
#include <stdlib.h>
#include<limits.h>

struct stackNode{
	int data;
	struct stackNode* next;
};
struct stackNode *newnoode(int data){
	struct stackNode *tmp=(struct stackNode*)malloc(sizeof(struct stackNode));
	tmp->data=data;
	tmp->next=NULL;

	return tmp;
}
void push(struct stackNode **root,int data){
	struct stackNode *stacknode=newnoode(data);
	stacknode->next=*root;
	*root=stacknode;
	printf("ELEMENT PUSHED IN TO STACK:%d \n",data);
}
int isEmpty(struct stackNode *root)
{
	return!root;
}
int pop(struct stackNode **root){
	if(isEmpty(*root))
		return INT_MIN;

	struct stackNode* tmp=*root;
	*root=(*root)->next;
	int poped=tmp->data;
	free(tmp);
	return poped;
	
}
int peek(struct stackNode *root){
	if(isEmpty(root))
		return INT_MIN;
	return root->data;
}


int main()
{
struct stackNode *root=NULL;
push(&root,20);
push(&root,30);
push(&root,40);
push(&root,50);


printf("POPED ELEMENTIS %d\n",pop(&root));

printf("POPED ELEMENTIS %d\n",peek(root));
return 0;
}