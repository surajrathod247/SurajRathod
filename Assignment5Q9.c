#include<stdio.h>
int main()
{
	int i,n;
	printf("enter n number.");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i*i);
	}
	return 0;
}

