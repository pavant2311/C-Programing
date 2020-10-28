
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>

Rotate_Matrix(int r,int c,m[3][3]){
	int row,col=0;
	int previous,current;
	
while(row<r && col<c)
{
	if(row+1==r || col+1==c)
	 break;
	
		previous=m[row+1][0];
		for(int i=col;i<c;i++)
		{
			current=m[row][i]
		    m[row][i]=previous;
		    previous=current;
		}
		row++;
		if(row<r){
		for(int j=row;j<r;j++)
		{ 
			current=m[i][c-1];
			m[i][c-1]=previous;
		}	previous=current;
		}c--;
	
	if(row<r){
		for(int i=col;i<r;i++)
		{
		    current=m[m-1][i];
			m[m-1][i]=previous;
			previous=current;	
		}
	}r--;
	
	if(col<c){
		for(int i=col;i<r;i++)
		{
		    current=m[i][col];
			m[i][col]=previous;
			previous=current;	
		}
	}c++;
}	
 for(int i=0;i<r;i++)
 { for(int j=0;j<c;j++)
	  { 
		  printf("%d \n",m[i][j]);
		  
		  
	  }}
  
}	


void main()
{
	int m[r][c]={{1,2,3},
		         {4,5,6},
		         {7,8,9}};
		         
		 Rotate_Matrix(r,c,m);       
		         printf("MATRIX ROTATION\n");
		         
			 }
	
	
