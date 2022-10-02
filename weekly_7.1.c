#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int high[10];
	int sum = 0;

	for (int x = 1; x <= 10; x++)
	{
		printf("Input high: ");
		scanf("%d", &high[x]);
	}
	for (int x = 1; x <= 10; x++)
	{
		printf("%d, ", high[x]);
		sum = sum + high[x];
	}
	printf("\nmean value is %f", sum / (float)10);
	
	return 0;
}