#include<stdio.h>
int main()
{
	int num;
	
	printf("\n enter any number");
	scanf("%d",&num);
	
	if(num%4==0)
	{
		 printf("\n entered number is not prime");
		 
	}
	else
	{
		printf("\n number is prime");
	}
	
	return 0;
}