#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int n,i,j;

	printf("Input number: ");
	scanf("%d",&n);

	i = 1;
	
	while (i <= n)
	{
		j = 1;

		while (j <= n)
		{
			if (i % 2 != 0 && j % 2 != 0 || i % 2 == 0 && j % 2 == 0) printf("*");
			else printf(" ");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}