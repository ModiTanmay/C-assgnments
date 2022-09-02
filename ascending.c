#include<stdio.h>
int main()
{
	int a[5],i,j,n,temp;
	
		

	printf("\n how many number you want to sort");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
 }

	
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			
							
		 }
	
	}
}


	

	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	
return 0;
}
