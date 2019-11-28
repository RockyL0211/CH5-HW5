#include <stdio.h> 

int main()
{
	int arr[] = { 0 }, c, b, i, max;

	printf("Enter number of elements\n");
	scanf_s("%d", &b);

	printf("Enter %d integers\n", b);

	for (c = 0; c < b; c++)
		scanf_s("%d", &arr[c]);

	max = arr[0];

	for (i = 1; i <= b; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	printf("Largest number is %d\n", max);
	system("pause");
	return 0;
}