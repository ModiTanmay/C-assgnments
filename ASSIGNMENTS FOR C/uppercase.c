#include<stdio.h>
int main()
{
	char ch;
	printf("\n enter the character ");
	scanf("%c",&ch);
	
	if(ch>='A'&& ch<='Z')
	{
		printf("\n entered character is  capital");
	}
	else
	{
	printf("\n entered character is small");
	
	}
return 0;
}