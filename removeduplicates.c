#include<stdio.h>
#define COUNT 256

int main()
{
int n;
scanf("%d",&n);
char A[100];

char hash[COUNT]={0};
scanf("%s[^/n]",A);

char temp=0;
hash[A[temp]]=1;
  for(int i=1;i<n;i++)
  {
  if(hash[A[i]]==0)
   {
hash[A[i]]=1;
temp++;
A[temp]=A[i];
}
}
temp++;
A[temp]='\0';
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		if(A[i]>a[j])
			
	}
}

for(int j=temp-1;j>=0;j--)
{
printf("%c ",A[j]);
}
return 0;

}