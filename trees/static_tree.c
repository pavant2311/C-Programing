#include <stdio.h>
#include <stdlib.h>

int max=0,current=0;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
 struct node *head,*tail=NULL;
struct node *NewNode(int value)
{
	struct node *tmp=(struct node *)malloc(sizeof(struct node));
	tmp->data=value;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}

void convertbtToDLL(struct node *node) {

       if(node == NULL)  
        return;        
    convertbtToDLL(node->left);
     if(head == NULL) 
        head = tail = node;     
     else {          
        tail->right = node;        
        node->left = tail;  
        tail = node;  
    }  
     convertbtToDLL(node->right);  
} 

int getLevelofKey(struct node *root,int level,int key)
 {
	if(root==NULL)
		return -1;
	if(root->data==key)
		return level;

	int level2=getLevelofKey(root->left,level+1,key);

	if(level2!=-1)
		return level2;

     return getLevelofKey(root->right,level+1,key);
 }


 int getLevelbyanother(struct node *root,int key)
{  
	
	struct node *tmp = root;

	if(tmp)
	{
		max--;
		if(tmp->data==key)
			return max;
        
		getLevelbyanother(tmp->left,key);
		max++;		
		getLevelbyanother(tmp->right,key);
		max++;

		
	}
	return max;
}
void k_distance_from_root(struct node *root,int k,int dist){

	if(!root)
     {		
	   if(k==dist){
	   	printf("%d=\n",root->data);
	   	return;
	   }

	   k_distance_from_root(root->left,k,dist++);
	   k_distance_from_root(root->right,k,dist++);
     }
}

void display_ll_data(struct node *root)
{
	struct node *temp = root;
	while(root)
	{
		printf("%d\t", root->data);
		root = root->left;
	}
}
void display_trree_data(struct node *root)
{
	struct node *tmp = root;
	if(tmp)
	{
		display_trree_data(tmp->left);
		printf("%d-", root->data);
		display_trree_data(tmp->right);
		
	}
}
void left_side_view_oftree(struct node *root)
{

	struct node *tmp=root;
	if(tmp){
        current++;

		if(max<current){
			max=current;
			printf("%d-\n",tmp->data);
		}

		left_side_view_oftree(root->left);
          //current--;
		left_side_view_oftree(root->right);
	      current--;

	}

}
int lsum=0,rsum=0;
int Sumtree_or_Not(struct node *root){	

   if(root==NULL)
   	return 0;
   if(root->left==NULL && root->right==NULL)
   	return root->data;
   lsum=Sumtree_or_Not(root->left);
   rsum=Sumtree_or_Not(root->right);

   if(lsum==-1 || rsum==-1)
   	return -1;

   if(root->data==lsum+rsum)
   	return 2*root->data;
   else
   	return -1;
}
int sizeofBinaryTree(struct node *root){
	return root?(sizeofBinaryTree(root->left)+sizeofBinaryTree(root->right)+1):0;
}
void Leafes_of_tree(struct node *root){
   if(root){
   	Leafes_of_tree(root->left);
   	if(root->left==NULL && root->right==NULL)
   		printf("%d\n",root->data);
   	Leafes_of_tree(root->right);

   	}


}
int main(){
	struct node *h;
	struct node *root=NewNode(100);
	root->left=NewNode(40);
	root->right=NewNode(70);
	root->left->right=NewNode(10);
	root->left->right->left=NewNode(100);		
	root->right->left=NewNode(50);
	//root->right->left->right=NewNode(80);
	//root->right->left->right->right=NewNode(90);
	
	//root->left=NewNode(50);
	//root->right=NewNode(50);
	
	
    display_trree_data(root);
    //convertbtToDLL(root);
    printf("=========\n");
    printf("Size of tree:%d\n",sizeofBinaryTree(root));
    //display_ll_data(root);
    //printf("Level of element=%d\n",getLevelofKey(root,1,50));
    printf("Level of element=%d\n",getLevelbyanother(root,80));
     left_side_view_oftree(root);
     //display_trree_data(root);
     //k_distance_from_root(root,3,0);
      //printf("sumtree %d\n:",Sumtree_or_Not(root));
     TopVieof_Btree(root);
     //Leafes_of_tree(root);
     //display_trree_data(root);

	return 0;
}