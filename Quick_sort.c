//mrg sort
#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int*b){
	int tmp=*a;
	*a=*b;
	*b=tmp;
}	
int Partition(int a[],int l,int h)
{	int pivot,i;
	pivot=a[h];
	 i=l-1;
	 
	 for(int k=l;k<=h-1;k++)
	 {
		 if(a[k]<=pivot)
		 {
			 i++;
			 swap(&a[i],&a[k]);
	    }
	swap(&a[i+1],&a[h]);
	return(i+1);
    }}
void Quicksort(int a[],int l,int h)
{
	if(l<=h){
		
		int p=Partition(a,l,h);
		Quicksort(a,l,p-1);
		Quicksort(a,p+1,h);
	       }
}
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i <size; i++)
    printf("%d \n", arr[i]);
    
}

int main()
{
	int a[50],n;
	scanf("%d",&n);	
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);	
	Quicksort(a,0,n-1);
	printf("AFTER SORTING \n");
	printArray(a,n);
	return 0;
}




