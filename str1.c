// #include<stdio.h>
// void main(){
// 	char s[20];
// 	printf("Enter your string:");
// 	scanf("%s",s);
// 	printf("You have entered:%s\n",s);
// }

// #include<stdio.h>
// #include<string.h>
// int main()
// {
// 	char ch[11]="Satyajit";
// 	char str='B';
// 	printf("Original string:%s\n", ch);
// 	printf("string to be appened:%c\n", str);
// 	strncat(ch, &str, 1);
// 	printf("After appened the string: %s\n", ch);
// 	return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
	char string[10]="Bhunia";
	char str1[10]="Satyajit";
	strncat(str1, string, 20);
	printf("The string is: %s\n",string);
	printf("The full string is: %s\n",str1);
	return 0;
}