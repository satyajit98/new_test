#include<stdio.h>
int main(){
	int y;
	printf("Enter the year-");
	scanf("%d",&y);
	if(y%4==0)
		printf("Leaper\n");
	else
		printf("Not Leaper\n");
	return 0;
}