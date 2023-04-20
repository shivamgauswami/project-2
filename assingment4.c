#include<stdio.h>

main()
{
	char ch;
	
	printf("press M for monday\n");
	printf("press M for tuesday\n");
	printf("press M for wednesday\n");
	printf("press M for thrusday\n");
	printf("press M for friday\n");
	printf("press M for saturday\n");
	printf("press M for sunday\n");

	printf("Enter alpha : ");
	scanf("%c",&ch);

	switch(ch)
	{
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thrusday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saturday");
			break;
		case 's':
			printf("Sunday");
			break;
		default :
			printf("valid Alphabate");
	}

}
