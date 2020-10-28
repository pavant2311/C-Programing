//Insertion,Deletion,Size,Display 
#include<stdio.h>
#include<stdlib.h>

struct node{
  int data;
  struct  node * next;	
};

struct node *newNode(int data)
{
	struct node *tmp=(struct  node *)malloc(sizeof(struct  node));
	tmp->data=data;
	tmp->next=NULL;	
	return tmp;
}

void DeleteNode(struct node **head_ref, int key) 
{    
    struct node* temp = *head_ref, *prev;  
    if (temp != NULL && temp->data == key) 
    { 
        *head_ref = temp->next;   
        free(temp);                
        return; 
    }   
    
    while (temp != NULL && temp->data != key) 
    { 
        prev = temp; 
        temp = temp->next; 
    }  
   
    if (temp == NULL) return;    
    prev->next = temp->next;  
    free(temp);  
} 
void InsertNode(struct node **head,int new_data) 
{ 
    struct node* new_node = (struct node*) malloc(sizeof(struct node)); 
    new_node->data=new_data; 
    new_node->next=(*head); 
    (*head)=new_node; 
} 

void SizeOfLinkedList(struct node* head)
{  int count=0;
	while(head!=NULL){
	count++;
	head=head->next;
    }
		
	printf("Size of the linked list=%d \n",count);
}    	


void DisplayLinkedlist(struct node* head)
{   
	printf("Displas the linked list:");
	while(head!=NULL)
	{printf("%d-> ",head->data);
	 head=head->next;
	}
	printf(" \n");	
}    	

int main()
{   //initially linked list contain 10,20,30,40,50
	struct node *head = newNode(10);
	head->next = newNode(20);
	head->next->next = newNode(30);
	head->next->next->next = newNode(40);
	head->next->next->next->next = newNode(50);
	

	InsertNode(&head,100);
	DeleteNode(&head,20);
	SizeOfLinkedList(head);
	DisplayLinkedlist(head);
	
	return 0;
}
