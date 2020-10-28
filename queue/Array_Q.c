
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node
{
	int front,rear;
	int capacity;
	int *array;
};

struct node *CreateQueue(int size)
{
	struct node *Q=(struct node *)malloc(sizeof(struct node));
	if(!Q)
	return NULL;
	Q->capacity=size;
	Q->front=Q->rear=-1;
	Q->array=(int *)malloc(Q->capacity*sizeof(int));
	if(!Q->array)
	return NULL;
	
	return Q;
}

int Is_EmptyQueue(struct node *Q){
	return(Q->front==-1);
}
int Is_FulllQueue(struct node *Q)
{  return(((Q->rear)+1)%(Q->capacity)==(Q->front));
}
void Enqueue(struct node *Q,int element)
{
	if(Is_FulllQueue(Q))
	   printf("OVER_FLOW\n");
	else {
	    Q->rear=(Q->rear+1)%(Q->capacity);
	    Q->rear=element;
	    printf("%d \n ",element);
	    if(Q->front==-1)
	       Q->front=Q->rear;
	      } 
}	

int main()
{
	
	struct node *Q=CreateQueue(10);
	Enqueue(Q,23);
	Enqueue(Q,40);
	Enqueue(Q,33);
	Enqueue(Q,28);
	Enqueue(Q,84);
	
	
	return 0;

}
	
	
	
