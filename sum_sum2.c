#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		sum=sum+pow(i,2);
	}
	printf("the value of is-%d\n",sum);
	return 0;
}