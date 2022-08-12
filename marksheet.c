#include<stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,total;
	float per;
	
	printf("\n enter the marks of sub1");
	scanf("%d",&sub1);
	printf("\n enter the marks of sub2");
	scanf("%d",&sub2);
	printf("\n enter the marks of sub3");
	scanf("%d",&sub3);
	printf("\n enter the marks of sub4");
	scanf("%d",&sub4);
	printf("\n enter the marks of sub5");
	scanf("%d",&sub5);
	
	printf("\n");
	total=sub1+sub2+sub3+sub4+sub5;
	printf("\n Total=%d",total);
	
	per=total/5;
	
	printf("\n Percentage=%f",per);
	
	if(per>90)
	{
		printf("\n Congrulations You get Distinction");
	}
	
	else if(per<90 && per>75)
	{
		printf("\n congrulations You Get First class");
	}
	
	else if(per<75 && per>60)
	{
		printf("\n congrulations You Get Second class");
	}
	
	else if(per<60 && per>35)
	{
		printf("\n Congrtulations You Get Third class");
	}
	
	else
	{
		printf("\n Sorry You Are Fail Better Luck Next Time");
	}
	
	return 0;
}
	