#include<stdio.h>
int main()
{
	int weight,distance,x;

	printf("Input weight(kg.): ");
	scanf_s("%d", &weight);


	x = 500;
	distance = 0;
	while (weight > 0)
	{
		weight -= 1.05 * x;
		distance += 1;
		x *= 1.05;
		if (distance % 10 == 0)
		{
			weight += 10;
		}
	}
		printf("distanc = %d km.", distance);

	return 0;
}