#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFF_SIZE 100
char *function1(const char *str) {
 static char buff[BUFF_SIZE];
 int i;
 size_t strSize = strlen(str);
 for (i = 0 ;
 i < strSize && i < BUFF_SIZE ;
 i++) {
 char c = str[i];
 if (c >= 'a' && c <= 'z') {
 c = (c - 'a') + 'A';
 }
 buff[i] = c;
 }
 return buff;
}
int main() {
 char *msg = "Hello world!";
 char *ptr;
 printf("String Fun!\n");
 printf("Original msg is %s\n",msg);
 ptr = function1(msg);
 printf("ptr is %s\n",ptr);
 printf("msg is %s\n",msg);
 return 0;
}
