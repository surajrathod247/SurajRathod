#include<stdio.h>
int main()
{
	float INR,USD;
	printf("Enter Amount In INR:");
	scanf("%f", &INR);
	USD=INR/76.23;
	printf("Converted Currency In USD:%.2f", USD);
	return 0;
}
