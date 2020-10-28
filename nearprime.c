#include <stdio.h>
#include<math.h>

int main()
{

int n=50;
//scanf("%d",&n);


while(n!=0)
{
	int c=1;
     for(int i=2;i<n/2;i++)
     { 
     	printf("for \n");
        if(n%i==0){
      	 c=0;
         break;
       }
    }
    
       
           if(c==1)
            {
               printf("Nearest Prime:%d\n",n);
               n=0;
            }
           else{
              n--;
              printf("while--n:%d\n",n);
           }
           

        
}
return 0;
}