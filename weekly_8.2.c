#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];

	printf("Input:");
	fgets(str, sizeof(str), stdin);

	int i = strlen(str);
	while (i>=0)
	{
		int j = 0;
		while (j<i)
		{
			printf("%c", str[j]);
			j++;
		}
		i--;
		printf("\n");
	}





	return 0;
}