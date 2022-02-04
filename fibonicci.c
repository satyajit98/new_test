#include<stdio.h>
int fibbo(int);
int main()
{
	int i,n;
	printf("Enter the number-\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		printf("%d\t",fibbo(i));
	return 0;
}
int fibbo(int x)
{
	if(x==0)
		return 0;
	else if(x==1)
		return 1;
	else
		return(fibbo(x-1)+fibbo(x-2));
}