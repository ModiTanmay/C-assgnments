#include<stdio.h>
int main()
{
	int age;

	
	printf("\n enter your age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("\n You are eligible for voting");
		
	}
	else
	{
		printf("\n Sorry you are not eligible for voting");
	}
return 0;
}