#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,y1,y2,dis;
	printf("Enter the value of x1,x2,y1,y2\n");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	dis=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("total distance is--%f\n",dis);
	return 0;
}