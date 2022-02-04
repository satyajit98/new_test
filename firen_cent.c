#include<stdio.h>
int main(){
	float tf,tc;
	printf("Enter the temp in farenhite-");
	scanf("%f",&tf);
	tc=(5*(tf-32))/9;
	printf("the centrigrade is-%f\n",tc);
	return 0;
}