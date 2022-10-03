#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];

	printf("Input:");
	fgets(str, sizeof(str), stdin);

	for (int i = strlen(str); i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}

	return 0;
}