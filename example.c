#include<stdio.h>

#define a printf("1");
  
// Puts "a" 10 times 
#define b a a 
  
// Puts "b" 10 times 
#define c b  b
  
int main() 
{ 
  c; 
  return 0; 
} 