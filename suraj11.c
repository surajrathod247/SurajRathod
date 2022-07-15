#include<stdio.h>
int main()
{
	int DD,MM,YYYY;
	printf("enter date in following format:DD/MM/YYYY");
	scanf("%d", &DD);
	scanf("%d", &MM);
	scanf("%d", &YYYY);
	printf("Day-%d Month-%d Year-%d", DD,MM,YYYY);
	return 0;
}
