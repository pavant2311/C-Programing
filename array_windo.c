#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[100];
	int d;
	int n;
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
      scanf("%d",&arr[i]);

    printf("enter window:");
    scanf("%d",&d);
    int max=0,f,l,m=-1;


    for(int i=0;i<n-d;i++)
    {
    	f=i;
    	l=f+d;
    	if (m<f)
    	{  max=arr[f];
    	     for (int j = f; j < l; ++j)
    	      {
    	 	     if(max<=arr[j])
    	 		  max=arr[j];
    	       }
    	}
    	else
    	{
    		   if(max<arr[l])
    			max=arr[l];
    	}
    printf("MAX:%d\n",max);
    }
return 0;
}