#include <stdio.h> 
void function();
int main() 
{ 
    static int i = 5; 
    if (--i){ 
        printf("%d ", i); 
        main(180); 
        printf("HI \n");
    } 
    function();
}