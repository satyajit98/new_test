/*#include<stdio.h>
int main(){
	char ch[30];
	printf("Enter your name\n");
	gets(ch);
	printf("%s\n",ch);
	return 0;	
}*/

#include <stdio.h>

int main()
{
  char z[100];

  printf("Enter a string\n");
  gets(z);

  printf("The string: %s\n", z);
  return 0;
}