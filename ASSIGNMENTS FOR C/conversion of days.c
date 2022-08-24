#include<stdio.h>
int main()
{
	         
      float years,days,weeks;
	
	printf("\n enter a days");
	scanf("%f",&days);
	
	years=days/365;
	weeks=days/7;
	
	printf("\n years=%d",years);
	printf("\n weeks=%d",weeks);
	
	
	return 0;
}