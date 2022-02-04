#include<stdio.h>
int main(){
	int a,b,min;
	printf("Enter the two numbers\n");
	scanf("%d%d",&a,&b);
	min=a<b?a:b;
	printf("The minimum two number is--%d\n",min);
	return 0;
}