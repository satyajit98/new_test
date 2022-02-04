#include<stdio.h>
int main()
{
	int a;
	printf("Enter the option:");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
		printf("SACHIN\n");
		break;
		case 2:
		printf("SOURAV\n");
		break;
		case 3:
		printf("DRAVID\n");
		break;
		default:
		printf("DHONI\n");
	}
	return 0;
}