#include<stdio.h>
void valuechange(int* address)
{
	*address = 7978;
}
int main()
{
	int a =35, b=65;
	printf("The value of a is %d\n",a);
	valuechange(&a);
	printf("The value of a is %d\n",a);
	return 0;
}