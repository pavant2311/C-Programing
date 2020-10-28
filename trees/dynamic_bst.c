#include<stdlib.h>
#include <stdio.h>

struct node{
   int data;
   struct node *left;
   struct node *right;
};

struct node *Newnode(int data){
   struct node *newnode=(struct node*)malloc(sizeof(struct node));
      newnode->data=data;
      newnode->left=NULL;
      newnode->right=NULL;

      return newnode;
    }
 struct node* insert_into_tree(struct node *root,int data)
{     
      if(root==NULL)
         return(Newnode(data));       
     else{
      if(root->data > data)
          root->left=insert_into_tree(root->left,data);
      else
          root->right=insert_into_tree(root->right,data);
      }
   return root;
}
void display_trree_data(struct node *root){
  // struct node *tmp=root;
   if(root==NULL)
    return;
       printf("%d\n",root->data);
       display_trree_data(root->left);
       display_trree_data(root->right);
   
}
int sizeoftree(struct node *root){
  return root?(1+sizeoftree(root->left)+sizeoftree(root->right)):0;
}

int main()
{
   struct node *root=NULL;
   root=insert_into_tree(root,100);
   printf("Hello World\n");
   
   int n;
   scanf("%d",&n);
  int arr[n];
   for(int i=0;i<n;i++)
   scanf("%d",&arr[i]);
   
  for(int i=0;i<n;i++)
   {
       insert_into_tree(root,arr[i]);
   }
   //printf("Size of Tree %d\n",sizeoftree(root));
   printf("==================\n");
   display_trree_data(root);
   //display_trree_data(root);

   return 0;
}

