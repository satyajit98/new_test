#include<stdio.h>
int main()
{
	int a[50],n,i,flag,s;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	printf("Enter the element of the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The 1-D array is:\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("Enter the elements to be searchs\n");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			flag=i;
			break;
		}
	}
	if (flag==i)
		printf("The elements is present\n");
	else
		printf("The elements is not present\n");
	return 0;
}