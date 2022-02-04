#include<stdio.h>

void starpattern(int rows)
{
	for (int i = 0; i <rows; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
void revstarpatter(int rows)
{
	for (int i = 0; i <rows; i++)
	{
		for (int j = 0; j <=rows-i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int rows,type;
	printf("If you want to starpattern press 0 or press 1 for reversestarpattern:");
	scanf("%d", &type);
	printf("How many rows do you want?\n");
	scanf("%d", &rows);
	switch(type)
	{
		case 0:
		starpattern(rows);
		break;
		case 1:
		revstarpatter(rows);
		break;
		default:
		printf("you have entered wrong");
		break;
	}
}