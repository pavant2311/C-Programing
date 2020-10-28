//printing stream of data into file
#include<stdio.h>
#include<stdlib.h>
#define default_size 100

char *Resize(char *p,int capacity){
	return realloc(p,capacity+default_size);
}


int main(){
	
	FILE *fp;
	char ch;
	char *input;
	int capacity=default_size;
	int count=0;
	fp=fopen("streamfile.txt","w");
	input=(char *)malloc(sizeof(char)*default_size);
	
	while(ch=getchar()!=EOF){
		if(capacity==count){
			input=Resize(input,capacity);
			capacity=capacity+default_size;
		  }
		  input[count++]=ch;
		  putc(ch,fp);
		}
		puts(input);
	
	
	return 0;
}
