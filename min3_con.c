#include<stdio.h>
int main(){
	int a,b,c,min;
	printf("Enter the three numbers-\n");
	scanf("%d%d%d",&a,&b,&c);
	min=(a<b?a:b)<c?(a<b?a:b):c;
	printf("The maximum number is-%d\n",min);
	return 0;
}