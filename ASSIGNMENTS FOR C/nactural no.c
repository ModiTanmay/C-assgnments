#include<stdio.h>
int main()
{
int sum=0,i,n;

printf("\n enter the numbers");
scanf("%d",&n);


for(i=1;i<=n;i++)
{
	sum=sum+i;
}

printf("\n sum=%d",sum);
return 0;
}