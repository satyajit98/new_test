#include<stdio.h>

int main(){
	int age;
	printf("Enter your age--\n");
	scanf("%d",&age);
	printf("You have enter%d\n",age);
		if (age>=18)
		{
			printf("Your are adult!\n");
		}
		else{
			printf("You are child!\n");
		}
		return 0;
}