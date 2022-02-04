#include<stdio.h>
int main()
{
	float a,b;
	int i;
	printf("Enter the number what do you want to calculate:\n");
	scanf("%f%f",&a,&b);
	printf("\n1.addition \n2.substraction \n3.multiplication \n4.divison\n");
	printf("Enter your choice\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
		printf("The addition is=%f\n",a+b);
		break;
		case 2:
		printf("The substraction is=%f\n",a-b);
		break;
		case 3:
		printf("The multiplication is=%f\n",a*b);
		break;
		case 4:
		printf("The divison is=%f\n",a/b);
		break;
		default:
		printf("WRONG OPTION\n");
	}
	return 0;
}