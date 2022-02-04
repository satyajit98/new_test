#include<stdio.h>
int main(){
	int a;
	printf("Enter your age-");
	scanf("%d",&a);
	if(a>=18)
		printf("Adult\n");
	else
		printf("Child\n");
	return 0;
	}