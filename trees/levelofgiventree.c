#include<stdlib.h>
#include <stdio.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
struct node *
newNode (char data)
{
  struct node *node = (struct node *) malloc (sizeof (struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return (node);
}


void
printInorder (struct node *node, int k, int level)
{
  if (node)
    {
      if (k == node->data){
	    printf ("%d--%d \n", level, node->data);
	    return;}

      printInorder (node->left, k, level + 1);
      printInorder (node->right, k, level + 1);

    }

}

int
main ()
{
  struct node *root = newNode (10);
  root->left = newNode (20);
  root->right = newNode (30);
  root->left->left = newNode (40);
  root->left->right = newNode (15);
  root->left->right->left = newNode (35);
  root->left->right->right = newNode (66);
  root->left->right->right->right = newNode (666);

  printInorder (root, 666, 1);

  return 0;
}
