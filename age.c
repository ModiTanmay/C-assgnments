#include<stdio.h>
int main()
{
	int age;

	
	printf("\n enter your age");
	scnaf("%d",&age);
	if(age>=18)
	{
		printf("\n you are eligible for voting");
		
	}
	else
	{
		printf("\n sorry you are not eligible for voting");
	}
return 0;
}