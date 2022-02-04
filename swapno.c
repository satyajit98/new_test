#include<stdio.h>
int main(){
	int a,b;
	printf("Enter the two numbers::\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("Your number is--\n%d\n%d\n",a,b);
	return 0;
}