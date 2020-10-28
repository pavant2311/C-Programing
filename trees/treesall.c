#include<stdio.h>
#include<stdlib.h>
int *hash[20]={NULL};

struct  node
{
	int data;
	struct  node *left;
	struct node *right;
	
};
struct ll
{
	int val;
	struct ll *next;
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
int getlevelofnode(struct node *root,int l,int k)
{
	if(root==NULL)
		return -1;
	if(root->data==k)
		return l;
	int l2=getlevelofnode(root->left,l+1,k);
	if(l2!=-1)
		return l2;
	return getlevelofnode(root->right,l+1,k);
}
void printnodesatkdistance(struct node *root,int k,int d)
{
	if(root)
	{
			if(k==d)
		{
			printf("%d\n",root->data);
		    return;
		}
	}

		printnodesatkdistance(root->left,k,d+1);
		printnodesatkdistance(root->right,k,d+1);
}

/*void add_to_hash(int hd,int root_val){
   struct ll *ptr;
   struct ll *tmp=(struct ll*)malloc(sizeof(struct ll));
   tmp->val=root_val;
   tmp->next=NULL;
    ptr=hash[hd];
    if(ptr!=NULL){
    	ptr=hash[hd]->next;
    }
    ptr->next=tmp;   

}

//void displayverticalorder(){
//for(int i=)
//	if(!hash[i])
//}

void verticalorderoftree(struct node *root,int hd){
	if(root==NULL)
		return;
     add_to_hash(hd,root->data);
verticalorderoftree(root->left,hd-1);
verticalorderoftree(root->right,hd+1);

}*/
void printvertical(struct node *root,int lineno,int hd)
{
if(root==NULL)
	return;
if(hd==lineno)
	printf("%d-",root->data);
printvertical(root->left,lineno,hd-1);
printvertical(root->right,lineno,hd+1);
}
void findminmax(struct node *root,int *min,int *max,int hd)
{
	if(root==NULL)
		return;
    if(hd<*min)
	*min=hd;
    else if(hd>*max)
    *max=hd;
findminmax(root->left,min,max,hd-1);
findminmax(root->right,min,max,hd+1);

} 
void verticalorderoftree(struct node *root)
{

int min=0,max=0,lineno;
findminmax(root,&min,&max,0);
for(lineno=min;lineno<=max;lineno++)
	printvertical(root,lineno,0);
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
root->right->left->right=Newnode(root,45);
//printf("Sizeoftree=%d\n",Sizeoftree(root));
//preorder(root);
//printf("level of node %d \n",getlevelofnode(root,0,90/2));
//printnodesatkdistance(root,2,0);
verticalorderoftree(root);

return 0;
}