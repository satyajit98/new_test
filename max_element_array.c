#include<stdio.h>
int main()
{
	int a[50],n,i,max;
	printf("Enter the size of the array:\n");
	scanf("%d",&n);
	printf("Enter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The 1-D array is:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("The maximum elements is=%d\n",max);
	return 0;
}