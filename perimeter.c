#include<stdio.h>

int main()
{
	int l,b,peri;
	printf("Enter the lenght and breadth of rectangle-");
	scanf("%d%d",&l,&b);
	peri=2*(l+b);
	printf("the result is-->%d\n",peri);
	return 0;
}