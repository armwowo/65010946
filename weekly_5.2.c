#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num[3], i, j, temp;

	printf("Input numbers: ");

	for(i=0;i<3;i++) scanf("%d", &num[i]);
	
	for (i = 2; i >= 0; i--)
	{
		for (j = i - 1; j >= 0; j--)
		{
			if (num[i] > num[j])
			{
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	for (i = 0; i < 3; i++)
	{
		printf("%d ", num[i]);

		if (i != 2) printf("> ");
	}

	return 0;
}
