#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the two numbers=\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("your number is--\n%d\n%d\n",a,b);
	return 0;
}