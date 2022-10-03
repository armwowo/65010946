#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n;

	printf("Input number:");
	scanf("%d", &n);

	int i = 1;
	while (i <= n)
	{
		int j = 1;
		while (j <= 2 * n - 1)
		{
			if (j <= n - i || j >= n + i) printf(" ");
			else printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}