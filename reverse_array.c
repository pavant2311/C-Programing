#include<stdio.h>
 void right_rotate(int arr[],int n);
 
 
 
void reverse_array(int arr[],int n,int d)
{	int k;
  for(k=0;k<d;k++){
   	right_rotate(arr,n);}
   	   
	}
    
 void right_rotate(int arr[],int n)
 {	
	int tmp,j;
	tmp=arr[0];
    for(j=0;j<=n-1;j++){
    arr[j]=arr[j++];}    
    arr[j++]=tmp;
  printf("fine\n");
}

void display(int arr[],int n)
{
	for(int j=0;j<=n;j++)
    printf("%d ",arr[j]);

}

void main()
{
	int arr[20],d,n=9;
	for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    printf("enter rotation from which number");
    scanf("%d",&d);
    //display();
    reverse_array(arr,n,d);
    display(arr,n);
}
