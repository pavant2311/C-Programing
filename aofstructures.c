#include<stdio.h>
#include<string.h>


int main()
{
	char s[19]="aaaaabbbbbb";
	int n=sizeof(s)/sizeof(s[0]);
	int c=0;
    int arr[26];



for(int i=n/2;i<=n;i++)
   arr[s[i]-'a']++;
	

for(int i=0;i<n/2;i++){
	if(arr[s[i]-'a']<1)
		c++;

}

printf("%d\n",c);



	return 0;
}