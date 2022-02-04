#include<stdio.h>
int main(){
	float sale,commi;
	printf("Enter the sale\n");
	scanf("%f",&sale);
	if(sale<=5000)
		commi=0.5*sale;
	else if(sale>=10000)
		commi=0.10*sale;
	else if(sale>20000)
		commi=0.15*sale;
	else
		commi=0.20*sale;
	printf("The commision is--%f\n",commi);
	return 0;
}