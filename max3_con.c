#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter the three numbers::\n");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b?a:b)>c?(a>b?a:b):c;
	printf("The three number is--%d\n",max);
	return 0;
}