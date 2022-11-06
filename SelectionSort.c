#include <stdio.h>


#define SIZE		10

int main()
{
	int a[SIZE] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int min, min_indis;

	for (int i = 0; i < SIZE - 1; ++i)
	{
		min = a[i];
		min_indis = i;

		for (int k = i + 1; k < SIZE; ++k)
		{
			if (a[k] < min)
			{
				min = a[k];
				min_indis = k;
			}
		}
		a[min_indis] = a[i];
		a[i] = min;
	}

	for (int i = 0; i < SIZE; ++i)
		printf("%d ", a[i]);
	printf("\n");


	return 0;
}