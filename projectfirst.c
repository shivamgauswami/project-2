#include<stdio.h>

main()
{
	char ch,num,sch;
	
	
	
	
	printf("enter your value ");
	scanf("%c",&ch);
	
	
	if(ch>='A' && ch<='Z')
	{
		printf("this value is in first alphabet");
	}
	else if(ch>='a' && ch<='z')
	{
		printf("this value is in small alphabet");
	}
	else if(num>=0 && num<=999999)
	{
		printf("this is number value");
	}
	else
	{
		printf(" this is special character");
	}
}
