#include<stdio.h>
int main()
{
	float R,A;
	printf("Enter Value Of Radius:");
	scanf("%f",&R);
	A=3.14*R*R;
	printf("Area Of Circle %.2f, Having Radius %f",A,R);
	return 0;
}
