#include<stdio.h>
int main(){
	int a,b,c,max;
	printf("Enter the three numbers::\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b&&a>c)
		max=a;
	else if(b>a&&b>c)
		max=b;
	else
		max=c;
	printf("The maximum number is->%d\n",max);
	return 0;
}