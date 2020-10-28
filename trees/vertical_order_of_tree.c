#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;  
};
struct hash
{
    int key;
    int value;
    struct node *next;
};

struct node *Newnode(struct node *root,int data)
{
	
	struct node *tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=data;
	tmp->right=NULL;
	tmp->left=NULL;
	return tmp;
}
struct hash *create_hash(struct hash h[5],int p)
{
    //struct hash h[p];
    int f;

    for(int i=0;i<p;i++){
        f=i-2;
        h[f].key=f;
        h[f].value=0;
        h[f].next=NULL;
    }
}
void add_to_hashtable(int val_node, int hd)
{
int f;
    
    if(h[hd].key==hd){
      while (h[hd].next!=NULL)
      {
         
      }
      


        h[hd].value=val_node;
        h[hd.next]
    }







}

void build_build_verticleorder(struct node *root,int hd)
{
    if(root==NULL)
    return;
    add_to_hashtable(root->data,hd);
    build_build_verticleorder(root->left,hd-1);
    build_build_verticleorder(root->right,hd+1);
}


int main()
{
struct hash h[5];    
struct  node *root=NULL;
root=Newnode(root,100);
root->left=Newnode(root,20);
root->right=Newnode(root,100);
root->left->left=Newnode(root,30);
root->left->right=Newnode(root,10);
root->right->left=Newnode(root,70);
root->right->left->right=Newnode(root,45);
create_hash(h,5);


build_verticleorder(root,0);

return 0;
}