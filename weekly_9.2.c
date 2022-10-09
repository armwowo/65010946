#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	char x[100];
	int sara[6] = { 0,0,0,0,0 };
	
	printf("Input word:");
	scanf("%s", &x);

	char *p;
	p = x;
	while (*p != '\0')
	{
		if (*p == 'a' || *p == 'A') { sara[0] += 1; }
		if (*p == 'e' || *p == 'E') { sara[1] += 1; }
		if (*p == 'i' || *p == 'I') { sara[2] += 1; }
		if (*p == 'o' || *p == 'O') { sara[3] += 1; }
		if (*p == 'u' || *p == 'U') { sara[4] += 1; }
	
		p++;
	}
	
	printf("a = %d e = %d i = %d o = %d u = %d", sara[0], sara[1], sara[2], sara[3], sara[4]);


	return 0;
}