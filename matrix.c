#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Queue
{
	int rear,front,size;
	unsigned capacity;
	int *array;	
};

struct Queue* create_queue(unsigned capacity)
{
	struct Queue *queue=(struct Queue*)malloc(sizeof(struct Queue));
	queue->capacity=capacity;
	queue->front=queue->size=0;
	queue->rear=capacity-1;
	queue->array=(int*)malloc(sizeof(int)* queue->capacity);
	return queue;
	
}
int isfull(struct Queue* queue)
{
	return(queue->capacity=queue->size);	
}
int isempty(struct Queue *queue)
{
	return(queue->size=0);
	}
	
void enqueue(struct Queue *queue, int data)
{
	if(isfull(queue))
	 return;
	 queue->rear=(queue->rear+1)%(queue->capacity);
	 queue->size=queue->size+1;
	 queue->array[queue->rear]=data;
	printf("%d item enqueued:\n",data);
	}
	
void main()
{
	struct Queue* queue=create_queue(100);
	enqueue(queue,10);
	enqueue(queue,20);
	enqueue(queue,30);
	enqueue(queue,40);
	//display();
	//dequeue();
	
	printf("im from main:");
}
