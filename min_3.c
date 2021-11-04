#include<stdio.h>
int main(){
	int a,b,c,min;
	printf("Enter the three numbers--\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
		min=a;
	else if(b<a&&b<c)
		min=b;
	else
		min=c;
	printf("The minimum number is--%d\n",min);
	return 0;

}