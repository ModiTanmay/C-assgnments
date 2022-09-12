#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	
	int row,col,x;
printf("\n enter your first matrix value");	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&a[row][col]);
		}
		
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",a[row][col]);
		}
		
		printf("\n");
	}
	printf("\n enter your second mtrix");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			scanf("%d",&b[row][col]);
		}
	}
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",b[row][col]);
		}
		printf("\n");
	}
	
	printf("\n mulitiplication of two matrix");
	for(row=0;row<2;row++)
	{
		
	
		for(col=0;col<2;col++) 
		{
			c[row][col]=0;
			
			for(x=0;x<2;x++)
			{
				c[row][col] = c[row][col]  + a[row][x]*b[x][col];
			}					
		}	
			
	}
	
	printf("\n");
	
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<2;col++)
		{
			printf("%d ",c[row][col]);
		}
		
		printf("\n");
	}
}










