

#include<stdio.h>
#include<limits.h>


int main()
{
	long n,sum;
	
	scanf("%ld :",&n);
	long a[n];
	
    for(long i=0;i<n;i++)
       scanf("%ld",&a[i]);
       
       sum=0;
       for(long i=0;i<n;i++)
          sum=sum+a[i];
          
          
                    printf("TOT SUM ::%ld \n",sum);
       
       
       
       return 0;   
	  }
            
       
       
