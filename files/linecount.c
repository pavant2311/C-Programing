//printing line count in file
#include<stdio.h>

int main(){
	
	FILE *fp;
	char ch;
	int linecount=0;
	while(ch=getchar()!=EOF){
		if(ch=='\n')
			++linecount;
		}
		printf("%d",linecount);	
	
	
	return 0;
}
