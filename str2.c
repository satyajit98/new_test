#include<stdio.h>
#include<string.h>

int main()
{
	char a1[] ="satyajit";
	char a2[] ="bhunia";
	puts(strcat(a1,a2));
	printf("The length of a1 is %ld\n", strlen(a1));
	printf("The length of a2 is %ld\n", strlen(a2));
	
	return 0;
}