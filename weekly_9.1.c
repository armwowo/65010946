#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int main()
{
	char x[100];
	int a=0, e=0, i=0, o=0, u=0;

	printf("Input word:");
	scanf("%s", &x);

	for (int i = 0; i < strlen(x); i++)
	{
		if (x[i] == 'a' || x[i] == 'A') a++;
		if (x[i] == 'e' || x[i] == 'E') e++;
		if (x[i] == 'i' || x[i] == 'I') i++;
		if (x[i] == 'o' || x[i] == 'O') o++;
		if (x[i] == 'u' || x[i] == 'U') u++;
	}
	if (a > 0) printf("a = %d\t", a);
	if (e > 0) printf("e = %d\t", e);
	if (i > 0) printf("i = %d\t", i);
	if (o > 0) printf("o = %d\t", o);
	if (u > 0) printf("u = %d\t", u);

	return 0;
}