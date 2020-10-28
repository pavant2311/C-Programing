#include<stdio.h>
#include<stdlib.h>
    
int main()
{
  int n;
    scanf("%d",&n);
	int arr[n];
	  for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);
 int min=0,max=100;
   min=arr[0];
   max=arr[0];
 int min1=0,max1=100;
 int c=0;
   for(int i=1;i<n;i++)
   {
     if(arr[0]>arr[1])
     {
      c++;
      min1=arr[1];
      max1=arr[0];
      }
     else{
      c++;
      min1=arr[0];
      max1=arr[1];
     }
   
   if(max<max1){
     max=max1;
     c++;
   }
   if(min>min1){
     min=min1;
     c++;
   }

   }


for(int j=0;j<n;j++)
    printf("-%d",arr[j]);

printf("%d\n",c);
    
    return 0;
}
