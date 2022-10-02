#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int high[10];
	int sum = 0;
	int x = 1;

	while (x <= 10)
	{
		printf("Input high: ");
		scanf("%d", &high[x]);
		x++;
	}
	x = 1;
	while (x <= 10)
	{
		printf("%d, ", high[x]);
		sum = sum + high[x];
		x++;
	}
	printf("\nmean value is %f", sum / (float)10);

	return 0;
}