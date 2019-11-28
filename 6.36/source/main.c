#include <stdio.h>

int main()
{
	char str[80];
	int l, i;

	printf("Enter a string: ");
	gets(str);

	for (l = 0; str[l] != '\0'; l++);

	for (i = l - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}

	return 0;
}