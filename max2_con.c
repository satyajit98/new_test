#include<stdio.h>
int main(){
	int a,b,max;
	printf("Enter the two numbers-\n");
	scanf("%d%d",&a,&b);
	max=a>b?a:b;
	printf("The maximum number is-%d\n",max);
	return 0;
}