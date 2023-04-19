#include<stdio.h>

main()
{
	char ch;
	
	printf("Enter alpha : ");
	scanf("%c",&ch);
	
	switch(ch)
	{
		case 77:
			printf("Monday");
			break;
		case 84:
			printf("Tuesday");
			break;
		case 87:
			printf("Wednesday");
			break;
		case 116:
			printf("Thrusday");
			break;
		case 70:
			printf("Friday");
			break;
		case 83:
			printf("Saturday");
			break;
		case 115:
			printf("Sunday");
			break;
		default :
			printf("valid Alphabate");
	}
	
}
