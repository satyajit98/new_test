#include <stdio.h>
int main()
{
	int n,i,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		if (n%i==0)
			c++;
	}
	if(c==2)
		printf("PRIME NO\n");
	else
		printf("NOT PRIME\n");
	return 0;
}