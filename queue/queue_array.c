#include<stdio.h>
#include<stdlib.h>
struct queue{
	int front;
	int rear;
	int size;
	unsigned capacity;
	int *array;
};
struct queue *createQueue(unsigned capacity){
	struct queue* Q=(struct queue*)malloc(sizeof(struct queue));
	Q->front=0;
	Q->rear=capacity-1;
	Q->capacity=capacity;
	Q->size=0;
	Q->array=(int *)malloc(Q->capacity*sizeof(int));
	return Q;	
	
}
int isFull(struct queue *Q){
	return(Q->size==Q->capacity);
}
void enqueue(struct queue *Q,int data){
	if(isFull(Q))
        return;
    Q->rear=(Q->rear+1)%Q->capacity;
    Q->array[Q->rear]=data;
    Q->size=Q->size+1;
    printf("ENQUEUED DATA:%d\n",data);

}
int main(){
	struct queue *Q=createQueue(10);
    enqueue(Q,10);
    enqueue(Q,20);
    enqueue(Q,30);
    enqueue(Q,40);
    enqueue(Q,50);

return 0;
}