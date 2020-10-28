#include<stdlib.h>
#include <stdio.h>

int main()
{
int a=1;
int b=0;
  //b=a++ + a-- * a++ + a-- + ++a - --a + a++ + ++a;

b= ++a+ ++a;
printf("%d==%d\n",a,b);

	return 0;
}