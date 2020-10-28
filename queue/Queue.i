# 1 "Queue.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 31 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 32 "<command-line>" 2
# 1 "Queue.c"






struct node{
 int top,rear,size;
 int capacity;
 int *array;
};
struct node *CreateQueue(int capacity){
 struct node *Q=(struct node*)malloc(sizeof(struct node));
 if(!Q)
 printf("MEMORY NOT CREATED\n:");

 Q->capacity=capacity;
 Q->top=Q->size=0;
 Q->rear=capacity-1;
 Q->array=(int *)malloc(Q->capacity*sizeof(int));
}
int Is_EmptyQueue(struct node *Q){
 return(Q->size==0);
}
int Is_FulllQueue(struct node *Q){
 return(Q->size==Q->capacity);
}
int insert(struct node *Q,int data){
 if(Is_FulllQueue(Q))
    return INT_MIN;

  Q->rear=((Q->rear+1)%Q->capacity);
  Q->array[Q->rear]=data;
  Q->size=Q->size+1;
  printf("%d \n",data);
 }
void Display(struct node *Q){
  printf("*************************\n");
  for(int i=0;i<=Q->size;i++)
   printf("%d \n",Q->array[i]);

 }
int Delete(struct node *Q){
  if(Is_EmptyQueue(Q))
     return INT_MIN;
    int tmp=Q->array[Q->top];
    Q->top=(Q->top+1)%Q->capacity;
    Q->size=Q->size-1;
    return tmp;
}
# 59 "Queue.c"
int main()
{
 struct node *Q=CreateQueue(25);
 insert(Q,30);
 insert(Q,80);
 insert(Q,10);
 insert(Q,40);
 insert(Q,90);
 Display(Q);
 int tmp=Delete(Q);
 printf("%d  \n",tmp);
  Display(Q);
}
