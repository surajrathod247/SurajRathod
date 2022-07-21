#include<stdio.h>
int main()
{
	int i=0,cnt=0,n;
	printf("enter a number.");
	scanf("%d", &n);
	for(cnt=2;i<n;cnt++)
	{
		if(cnt%2==0)
		{
		  printf("%d\n",cnt);
		  i++;
	    }
	}
	return 0;
}
