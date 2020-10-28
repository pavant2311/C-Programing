
#include <stdio.h>
#include<string.h>
#include<stdlib.h>

void arayaka_strings(char *str){

	printf("%s----\n",str);
	char slice[1]={""};

char *start,*end;
start=str;

while(*str){

	if(*str==slice[1])
	{
		end=str;
            
            while(*start!=slice[1])
		    printf("%c",*start);

		    printf("\n");
		    start=end+1;
	  }
	  else
       str++;
  }
  //return str;
}


int main()
{

char str[100];
gets(str);

arayaka_strings(str);
printf("%s===\n",str);

return 0;
}

