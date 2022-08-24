#include<stdio.h>
int main()
{
	int cm,metr,km;
	printf("\n enter the centimeters");
	scanf("%d" ,&cm);
	
	metr=cm/100;
	km=cm/100000;
	
	printf("\n meters=%d",metr);
	printf("\n kilometers=%d",km);
	
	return 0;
	
}