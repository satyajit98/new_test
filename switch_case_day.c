#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("SUNDAY\n");
		break;
		case 2:
		printf("MONDAY\n");
		break;
		case 3:
		printf("TUESDAY\n");
		break;
		case 4:
		printf("WEDNESDAY\n");
		break;
		case 5:
		printf("THURSDAY\n");
		break;
		case 6:
		printf("FRIDAY\n");
		break;
		case 7:
		printf("SATURDAY\n");
		break;
		default:
		printf("WRONG INPUT\n");
		return 0;
	}
}