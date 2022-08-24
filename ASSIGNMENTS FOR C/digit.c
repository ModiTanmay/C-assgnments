#include<stdio.h>
int main()
{ 
  char ch;
  printf("\n enter your choice");
  scanf("%c",&ch);
  
  if(ch>='a'&& ch<='z')
  {
  	printf("\n you entered character");
  	
  }
  else if(ch>=0)
  {
    printf("\n  you entered digit");	
  }
  else
  {
  	printf("\n you entered special character");
  }
  return 0;
}
