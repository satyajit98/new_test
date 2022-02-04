#include<stdio.h>
void main(){
	char s;
	printf("Enter the alphabets-\n");
	scanf("%c",&s);
	if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u')
		printf("The alphabet is vowel\n");
	else
		printf("The alphabet is conconent\n");
}