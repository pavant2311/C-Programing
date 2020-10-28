#include<stdio.h>
//#include<conio.h>
//#include<math.h>


void main()
{
	int a[3],b[3];
	
	for(int i=0;i<=2;i++)
	scanf("%d\t",&a[i]);
	printf("-----------------\n");
	for(int i=0;i<=2;i++)
	scanf("%d\t",&b[i]);
	
	printf("-----------------\n");
	int c1=0,c2=0;
	for(int i=0;i<=2;i++)
	{
		if(a[i]>b[i])
		c1=c1+1;
		if(a[i]<b[i])
		c2=c2+1;
		if(a[i]==b[i])
		return;
	}
		printf("%d  %d",c1,c2); 
}
