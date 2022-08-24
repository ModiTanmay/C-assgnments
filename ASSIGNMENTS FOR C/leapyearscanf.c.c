#include<stdio.h>
int main()
{
	int year;
	printf("\n enter any year");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("\n entered year is leap year");
	}
	
	else
	{
		printf("\n entered year is not leap year");
	}
	
	return 0;
}