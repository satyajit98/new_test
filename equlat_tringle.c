#include<stdio.h>
#include<math.h>
int main()
{
	float a,area;
	printf("Enter the side of equlateral triangle-\n");
	scanf("%f",&a);
	area=(sqrt(3)*a*a)/4;
	printf("The triangle area is:-%f\n",area);
	return 0;
}