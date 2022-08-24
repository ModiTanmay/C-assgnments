#include<stdio.h>
int main()
{
	float interest,p=10,r=5,n=15,t=18;
	
	interest=p*(1+r)/n*n*t;
	
	printf("\n compound interest of given number is:%f",interest);
	return 0;
}