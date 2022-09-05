#include<stdio.h>
int main()
{
	int weight, distance, x,a;

	printf("Input weight(kg.): ");
	scanf_s("%d", &weight);

	distance = 0;
	if(weight>0)
	{	
		for (x = 500; x <= weight; x += 1.05*x)
		{
			distance += 1;
			if (distance % 10 == 0)
			{
				weight += 10;
			}
		}

	}
	printf("distance = %d km.", distance);


	return 0;
}