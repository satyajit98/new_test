#include<stdio.h>

int main(){
	int num;
	printf("Enter the number which you want multi table->");
	scanf("%d",&num);
	printf("Your multi table is->>%d\n",num);
	for (int i =1; i < 11 ;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
	return 0;
}