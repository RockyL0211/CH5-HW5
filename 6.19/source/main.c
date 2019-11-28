#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int counter, a, b, i;
	int sum[11] = { 0 };
	
	srand(time(NULL));

	for (counter = 1; counter <= 36000; counter++)
	{
		a = 1 + (rand() % 6);
		b = 1 + (rand() % 6);
		sum[a + b - 2]++;
	}

	for (i = 0; i <= 10; i++)
	{
		printf("%d\t%d\n", i + 2, sum[i]);
	}

	system("pause");
	return 0;
}