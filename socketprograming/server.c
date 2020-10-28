#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
#include<sys/socket.h> 
#include<netinet/in.h>  
#include<arpa/inet.h> 
#include<sys/types.h>
#define PORT 4455

void  main()
{
   int serversocket;
   struct sockaddr_in serveraddr;
 
   int newsocket;
   struct sockaddr_in newaddr;
   socklen_t addr_size;
   char buffer[2000];
 

   serversocket = socket(AF_INET , SOCK_STREAM , 0);
   printf("[+]Socket created successfully\n");
   memset(&serveraddr,'\0',sizeof(serveraddr));

   serveraddr.sin_family = AF_INET;
   serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
   serveraddr.sin_port = htons(PORT);

   //Bind
   bind(serversocket,(struct sockaddr *)&serveraddr , sizeof(serveraddr));
   printf("[+]bind done to portnumber:%d\n",PORT);
   
   listen(serversocket , 3);
   printf("Waiting for incoming connections...\n");
   addr_size=sizeof(newaddr);
   
   newsocket = accept(serversocket, (struct sockaddr *)&newaddr, &addr_size);
   
   strcpy(buffer,"HELLO IM PAVANKUMARTALLURI BY THE WAY\n");
   send(newsocket,buffer,strlen(buffer),0);
   printf("[+]send the data to the client\n");
   printf("[+]closing the connection\n");
}
