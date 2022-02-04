#include<stdio.h>
int main()
{
	int n,i,even=0, odd=0;
	printf("Enter the numbe of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
			even=even+i;
		else
			odd=odd+i;
	}
	printf("The sum of even number-%d\n",even);
	printf("The sum of odd number-%d\n",odd);
	return 0;
}