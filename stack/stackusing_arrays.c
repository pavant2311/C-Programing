#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Stack
{
	int top;
	unsigned capacity;
	int *array;
};

struct Stack *createStack(unsigned capacity){
    struct Stack* stack=(struct Stack*)malloc(sizeof(struct Stack));
    if(stack==NULL)
    	printf("Memory error!");

    stack->capacity=capacity;
    stack->top=-1;
    stack->array=(int *)malloc(capacity*sizeof(int));
    return stack;
}
int isFullStack(struct Stack *stack){
  return stack->top==stack->capacity-1;
}
void push(struct Stack *stack,int data){
   if(isFullStack(stack))
   	return;
   stack->array[++stack->top]=data;
   printf("%d ::Has just pushed into stack:\n",data);
}
int isEmptyStack(struct Stack* stack){
	return stack->top==-1;
}
int pop(struct Stack* stack){
	if(isEmptyStack(stack))
		INT_MIN;
	return stack->array[stack->top--];

}
int peek(struct Stack *stack){
	if(isEmptyStack(stack))
		return INT_MIN;
	return stack->array[stack->top];
}

int main(){
	struct Stack *stack=createStack(10);
	push(stack,20);
	push(stack,30);
	push(stack,40);
	push(stack,50);
   
    printf("POPED element %d \n",pop(stack));

    printf("TOP of the Stack Element is:%d",peek(stack));
	return 0;
}