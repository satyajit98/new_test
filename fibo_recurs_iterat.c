#include<stdio.h>
int fib_recursive(int n)
{
	if(n==1||n==2)
	{
		return n-1;
	}
	else
	{
		return fib_recursive(n-1)+fib_recursive(n-2);
	}
}
int fib_iterative(int n)
{
	int a=0;
	int b=1;
	for (int i=0;i<n-1;i++)
	{
		b=a+b;
		a=b-a;
	}
	return 0;
}
int main()
{
	int number;
	printf("Enter the index to get fibonacci serise\n");
	scanf("%d",&number);
	printf("the value of fibonacci number at option no %d using recursive approch is %d\n",number,fib_recursive(number));
	printf("the value of fibonacci number at option no %d using iterative approch is %d\n",number,fib_iterative(number));
	return 0;
}