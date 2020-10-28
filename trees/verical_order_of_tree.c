#include<stdio.h>
#include<stdlib.h>
    int min=0,max=0,hd=0;

struct snode {
    int val;
    struct snode *link;
};
struct node
{
    int data;
    struct node *left;
    struct node *right;  
};
struct hash
{
    int key;
    struct snode *next;
};

//struct hash *hashp[10];


struct snode *snewnode(int data)
{
struct snode *t=(struct snode*)malloc(sizeof(struct snode));
t->val=data;
t->link=NULL;

return t;
}

struct node *Newnode(struct node *root,int data)
{
	
	struct node *tmp=(struct node*)malloc(sizeof(struct node));
	tmp->data=data;
	tmp->right=NULL;
	tmp->left=NULL;
	return tmp;
}
struct hash *create_hash(struct hash **hashp,int p)
{
    //struct hash h[p];
    int f;

    for(int i=0;i<p;i++){
        hashp[i]=(struct hash*)malloc(sizeof(struct hash));
        f=i-p/2;
        hashp[i]->key=f;
        hashp[i]->next=NULL;
    }
}
void printhashdata(struct hash **hashp,int n)
{
    struct snode *ptr;

    for(int i=0;i<n;i++){

        printf("Nodes @ level %d are : ",hashp[i]->key);
        ptr=hashp[i]->next;
        while (ptr)
        {
            printf(" %d ",ptr->val);
            ptr=ptr->link;
        }
        printf("\n");

    
    }
}

void add_to_hashtable(struct hash **hashp,int val_node, int hd,int n)
{
struct snode *tmp=snewnode(val_node);

for(int i=0;i<n;i++){
  if(hashp[i]->key==hd)
  {
    tmp->link=hashp[i]->next;
    hashp[i]->next=tmp;
  }
 }

}

void build_build_verticleorder(struct hash **hashp,struct node *root,int hd,int n)
{
    if(root==NULL)
    return;
    add_to_hashtable(hashp,root->data,hd,n);
    build_build_verticleorder(hashp,root->left,hd-1,n);
    build_build_verticleorder(hashp,root->right,hd+1,n);
}
void findminmax(struct node *root,int *min,int *max,int hd){

    if(root==NULL)
    return;
    if(hd<*min)
     *min=hd;
     if(hd>*max)
     *max=hd;
     findminmax(root->left,min,max,hd-1);
     findminmax(root->right,min,max,hd+1);
     

}


int main()
{

  printf("\n");  
   
struct  node *root=NULL;
root=Newnode(root,100);
root->left=Newnode(root,20);
root->right=Newnode(root,110);
root->left->left=Newnode(root,30);
root->left->right=Newnode(root,10);
root->right->left=Newnode(root,70);
root->right->left->right=Newnode(root,45);
findminmax(root,&min,&max,hd);
int n=max-min+1;
struct hash *hashp[n];
create_hash(hashp,n);
//printhashdata(10);

build_build_verticleorder(hashp,root,hd,n);
printhashdata(hashp,n);
printf("\n");
return 0;
}