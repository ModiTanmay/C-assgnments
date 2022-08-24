#include<stdio.h>
int main()
{
	int i,table;
	
	for(i=2;i<=10;i++)
	{
		table=i*table;
	}
	printf("\n%d",table);
	
return 0;
}