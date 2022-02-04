#include<stdio.h>

int main()
{
	int test;
	printf("Enter your qualification-\n");
	scanf("%d",&test);
	printf("You have entered %d as your qualification-\n",test);
	if (test>=90)
	{
		printf("your prize is= 45 rupees\n");
	}
	else if(test>=70)
	{
		printf("your prize is=30 rupees\n");
	}
	else{
		printf("your prize is=15 rupees\n");
	}
	return 0;
}