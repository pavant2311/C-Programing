//creating text.txt file and printing and reading it again
#include<stdio.h>


int main(){
	FILE *fp;
	char ch;
	fp=fopen("text.txt","w");
		while(ch=getc(stdin)!=EOF)
			putc(ch,fp);
	fclose(fp);
	
	fp=fopen("text.txt","r");
		while(ch=getc(fp)!=EOF)
			printf("%c",ch);
	
	
	
	return 0;
}
