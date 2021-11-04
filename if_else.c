#include<stdio.h>

int main()
{
	int age;
	printf("Enter your age--:\n");
	scanf("%d",&age);
	printf("You have entered %d as your age\n",age);
	if (age>=18)
	{
		printf("you are adult\n");
	}
	else if(age>=10)
	{
		printf("you are half child\n");
	}
	else
	{
		printf("you are child\n");
	}
	return 0;
}