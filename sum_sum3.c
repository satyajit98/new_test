#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,3);
	}
	printf("The value of n is-%d\n",sum);
	return 0;
}