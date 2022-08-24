#include<stdio.h>
int main()
{
	int basic,hra,da,growth ;
	
	printf("\n enter the basic salary");
	scanf("%d",&basic );
	
	if(basic<=10000)
	{
		hra=basic*20/100;
		da=basic*80/100;
		growth =basic+da+hra;
		
		printf("\n hra=%d",hra);
		printf("\n da=%d",da);
		printf("\n growth salry=%d",growth); 
	}
	
	else if(basic<=20000)
	{
		hra=basic*25/100;
		da=basic*90/100;
		growth =basic+da+hra;
		
		printf("\n hra=%d",hra);
		printf("\n da=%d",da);
		printf("\n growth salry=%d",growth); 
	}
	
	else 
	{
		hra=basic*30/100;
		da=basic*95/100;
		growth =basic+da+hra;
		
		printf("\n hra=%d",hra);
		printf("\n da=%d",da);
		printf("\n growth salry=%d",growth); 
	}
	
return 0;
}