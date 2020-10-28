#include<stdio.h>
#define COUNT 256

int main()
{
int n;
scanf("%d",&n);
char a[n];

char hash[COUNT]={0};
scanf("%s[^/n]",a);


  for(int i=0;i<n;i++)
  {
  	hash[a[i]]++;
  }
   
  for(int i=255;i>0;i--)
  {
  	if(hash[i]>=1)
  	{
  		printf("%c ",i);
  		
  	}
  }  

printf("\n");


return 0;

}