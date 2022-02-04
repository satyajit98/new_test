#include<stdio.h>
int main()
{
	float p,t,r,si;
	printf("Enter the principle,time,rate-\n");
	scanf("%f%f%f",&p,&t,&r);
	si=(p*t*r)/100;
	printf("The result is:-%f\n",si);
	return 0;
}