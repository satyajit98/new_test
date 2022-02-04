#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,area;
	printf("Enter the three side of triangle::");
	scanf("%f%f%f",&a,&b,&c);
	area=s=(a+b+c)/2;
		sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The scalen triangle is--%f",area);
	return 0;
}