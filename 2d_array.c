#include<stdio.h>
int main(){
	int marks[2][4]={{30,42,53,67},
					 {21,37,45,85}};
					 for(int i=0;i<2;i++)
					 {
					 	for(int j=0;j<4;j++)
					 	{
					 		printf("%d ",marks[i][j]);
					 	}
					 	printf("\n");
					 }
					 return 0;
}