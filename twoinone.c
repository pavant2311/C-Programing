#include<stdio.h>
#include<stdlib.h> 
#include<unistd.h> 
int main(int argc, char const *argv[])
{
	
	 char *args[]={"./2in1",NULL}; 
        execv(args[0],args); 
	
	return 0;
}

	