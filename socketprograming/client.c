#include<stdio.h>
#include<stdlib.h>
#include<sys/socket.h>
#include<string.h>
#include<netinet/in.h>
#include<sys/types.h>
#define PORT 4455
#include<arpa/inet.h>   

void main()
{  
	int clientsocket;
    struct sockaddr_in serveraddr;
    char server_reply[2000];

    clientsocket = socket(AF_INET , SOCK_STREAM , 0);
    printf("Socket created\n");

    serveraddr.sin_addr.s_addr = inet_addr("127.0.0.1");
    serveraddr.sin_family = AF_INET;
    serveraddr.sin_port = htons(PORT);
    

    connect(clientsocket , (struct sockaddr *)&serveraddr , sizeof(serveraddr));
    printf("connection  created\n");
        
         
       recv(clientsocket , server_reply , 1025 , 0);
       printf("data received: %s",server_reply);
           
           
        
      }	
		
		
		
		
		
		
		
		
		
		
					
	
