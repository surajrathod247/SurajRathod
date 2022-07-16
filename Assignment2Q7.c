#include<stdio.h>
int main()
{
	int n,a,b;
	printf("enter a number:");
	scanf("%d", &n);
	a=n%10;
	b=n/10;
	b=n-a;
	printf("Modified Number:%d", b);
	return 0;
}
