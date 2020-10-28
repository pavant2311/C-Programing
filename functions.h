

struct node1{
	int top,rear,size;
	int capacity;
	int *array;
};
struct node1 *CreateQueue(int capacity){
	struct node1 *Q=(struct node1*)malloc(sizeof(struct node1));
	if(!Q)
	printf("MEMORY NOT CREATED\n:");
	
	Q->capacity=capacity;
	Q->top=Q->size=0;
	Q->rear=capacity-1;	
	Q->array=(int *)malloc(Q->capacity*sizeof(int));
}
int Is_EmptyQueue(struct node1 *Q){
	return(Q->size==0);
}
int Is_FulllQueue(struct node1 *Q){
	return(Q->size==Q->capacity);
}
/*int insert(struct node *Q,int data){
	if(Is_FulllQueue(Q))
	   return INT_MIN;
	   
	 Q->rear=((Q->rear+1)%Q->capacity); 
	 Q->array[Q->rear]=data;
	 Q->size=Q->size+1;
	 printf("%d \n",data);
	}*/
	
void Display(struct node1 *Q){
		printf("*************************\n");
		for(int i=0;i<=Q->size;i++)
			printf("%d \n",Q->array[i]);
		
	}
int Delete(struct node1 *Q){
  if(Is_EmptyQueue(Q))
     return INT_MIN;
    int tmp=Q->array[Q->top];
    Q->top=(Q->top+1)%Q->capacity;
    Q->size=Q->size-1;
    return tmp;
}	
