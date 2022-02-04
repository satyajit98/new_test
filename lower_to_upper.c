#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the lower case->");
	scanf("%c",&ch);
	printf("The upper case is->>%c\n",ch-32);
	return 0;
}