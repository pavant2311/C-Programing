#include<stdio.h>
#include<stdlib.h>
struct node
{
	int top;
	int capacity;
	int *array;
	
};
struct node *CreateStack(int capacity)
{
	struct node *S=(struct node*)malloc(sizeof(struct node)); 
    S->capacity=capacity;
    S->top=-1;
    S->array=(int*)malloc(S->capacity * sizeof(int));
    return S;    
}

int isEmptyStack(struct node *S){
return(S->top==-1);}

int isFull(struct node *S){
	return(S->top==S->capacity-1);}

int pop(struct node *S)
{	if(isEmptyStack(S))
	{
	printf("stack empty");
	return 0;
    }
    else
    return(S->array[S->top--]);

}
/*void print_stack(struct ArrayStack *S)
{
	for(int i=0;i<=10;i++)
	printf("Array elements\n",ArrayStack->array[i]);
}*/

int push(struct node *S,int data)
{
	if(isFull(S))
	printf("stack full");
	else
	S->array[++S->top]=data;
	printf("%d data pushed\n",data);
}
void Display(struct node *Q){
		printf("*************************\n");
		for(int i=0;i<=Q->capacity;i++)
			printf("%d \n",Q->array[i]);
		}

void main()
{
	struct node* stack=CreateStack(10);

	push(stack,10);
	push(stack,20);
		push(stack,30);
		push(stack,40);
		Display(stack);
		pop(stack);
		push(stack,50);
		push(stack,60);
	pop(stack);
	Display(stack);
	printf("im IN MAIN");
	
}
