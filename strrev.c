#include <stdio.h>  
#include <string.h>  
void main()  
{
	char str[40];
	printf("Enter the string that you want to reverse:");
	fgets(str, sizeof(str), stdin);
	strrev(str);
	printf("After reverse that string:");
	puts(str);
}