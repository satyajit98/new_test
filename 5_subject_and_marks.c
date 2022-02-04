#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5;
	float agg, per;
	printf("Enter the marks of the five subject");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	agg=(m1+m2+m3+m4+m5);
	printf("Reqd aggregated marks=%f",agg);
	per=(agg/5);
	printf("\nReqd percentage=%f",per);
	if(per>=90)
	printf("\nGrade O");
	else if(per>=80)
	printf("\nGrade E");
	else if(per>=70)
	printf("\nGrade A");
	else
	printf("\nSupply");
	return 0;
}
