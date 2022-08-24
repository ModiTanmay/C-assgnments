#include<stdio.h>
int main()
{
	int month,choice;
	printf("\n 1.January");
	printf("\n 2.February");
	printf("\n 3.March");
	printf("\n 4.April");
	printf("\n 5.May");
	printf("\n 6.June");
	printf("\n 7.July");
	printf("\n 8.Auguest");
	printf("\n 9.September");
	printf("\n 10.October");
	printf("\n 11.November");
	printf("\n 12.December");
	
	printf("\n");
	
	
	printf("\n Enter a Month");
	scanf("%d",&choice);
	
switch(choice)
{


case 1:

		
printf("\n there are 31 days in this month");
break;


case 2:

		
printf("\n there are 28 days in this month");
break;


case 3:

		
printf("\n there are 31 days in this month");
break;


case 4:

		
printf("\n there are 30 days in this month");
break;


case 5:

		
printf("\n there are 31 days in this month");
break;


case 6:

		
printf("\n there are 30 days in this month");
break;


case 7:

		
printf("\n there are 31 days in this month");
break;


case 8:

		
printf("\n there are 31 days in this month");
break;


case 9:

		
printf("\n there are 30 days in this month");
break;


case 10:

		
printf("\n there are 31 days in this month");
break;


case 11:

		
printf("\n there are 30 days in this month");
break;


case 12:

		
printf("\n there are 31 days in this month");
break;


default:
printf("\n please enter valid month");
}
return 0;
}