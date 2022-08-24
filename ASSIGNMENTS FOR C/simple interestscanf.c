#include<stdio.h>
int main()
{
	float p,r,t,interest;
	printf("\n Enter The Value of Principle");
	scanf("%f",&p);
	printf("\n Enter The Rate");
	scanf("%f",&r );
	printf("\n Enter The Time ");
	scanf("%f",&t);
	
	interest=p*r*t/100;
	
	printf("\n interest of entered number is:%f",interest);
	
	return 0;
	

}