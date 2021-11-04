#include<stdio.h>
int main(){
	int a,b,min;
	printf("Enter the two numbers-");
	scanf("%d%d",&a,&b);
	if(a<b)
		min=a;
	else
		min=b;
	printf("the minimum number is-%d\n",min);
	return 0;
}