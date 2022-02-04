/*#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	unsigned int len;
	printf("Enter the string:");
	fgets(str, sizeof(str), stdin);
	len=strlen(str);
	printf("length of '%s'is'%d'\n",str,len);
	return 0;
}*/

#include<stdio.h>
int stringlen (char[]);
void main()
{
	char str[30];
	int len;
	printf("Enter the string:");
	fgets(str, sizeof(str), stdin);
	len=stringlen(str);
	printf("length:%d\n",len);
}
int stringlen(char x[])
{
	int i=0,count=0;
	while(x[i]!='\0')
	{
		count ++;
		i++;
	}
	return count;
}
