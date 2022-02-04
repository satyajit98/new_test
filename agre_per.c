#include<stdio.h>
int main(){
	int s1,s2,s3,s4,s5;
	float agr,per;
	printf("Enter the marks of 5 subject-->\n");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	agr=(s1+s2+s3+s4+s5);
	printf("agregrate of 5 subject is--%f\n",agr);
	per=(agr/5);
	printf("Percentage of 5 subject--%f\n",per);
	if(per>=90)
		printf("Outstanding'O'\n");
	else if(per>=70)
		printf("Excellent'E'\n");
	else if(per>=50)
		printf("Very good'A'\n");
	else if(per>=35)
		printf("Good'E'\n");
	else
		printf("Supply\n");
	return 0;
}