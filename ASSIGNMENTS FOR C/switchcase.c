include<stdio.h>
int main()
{
	float area,r,pi=3.14,b,h;
	int choice,length,width,height;
	
	printf("\n 1.Area of Circle");
	printf("\n 2. Area of Triangle");
	printf("\n 3. Area of Reactangle");
	
	printf("\n");
	
	printf("\n enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1:
	printf("\n Enter the value of radious");
	scanf("%f",&r);
	area=pi*r*r;
	printf("\n Area of circle is:%f",area);
	break;
	
	case 2:
	printf("\n enter the widthe and height");
	scanf("%f %f",&b,&h);
         area=(1/2)*b*h;
	printf("\n Area of Triangle is:%f",area);
	break;
	
	case 3:
	printf("\n enter the value of length,width and height");
	scanf("%d %d %d",&length,&width,&height);
	area=length*width*height;
	printf("\n Area of Rectangle is:%d",area);
	break;
	
	default:
	printf("\n Invalid choice");
}
return 0;
}