#include<stdio.h>
int main()
{
	long int a,b,n,rev=0;
	printf("Enter the number:");
	scanf("%ld",&n);
	while(n!=0)
	{
		a=n/10;
		b=n%10;
		rev=rev*10+b;
		n=a;
	}
	printf("The reverse number is=%ld\n",rev);
	return 0;
}