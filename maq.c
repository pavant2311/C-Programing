#include <stdio.h>
#include<math.h>

int main()
{
int minsofar,maxdiff,min=0,j,k;
int a[]={23,45,65,40,12,50};
minsofar=a[0];
maxdiff=0;
	
     for(int i=0;i<6;i++)
     { 
     	if(a[i]<minsofar){
     		min=i;
     		minsofar=a[i];
     	}
     	if(maxdiff<a[i]-a[min])
     	{
     	   maxdiff=a[i]-a[min];
     	   j=i;	
     	   k=min;
     	}

     	}

     	printf("maxdiff-%d-%d-%d\n",maxdiff,a[k],a[j]);
     	return 0;
       }
    