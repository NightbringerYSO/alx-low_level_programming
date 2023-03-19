#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints numbers from 0 to 10
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		printf("%i", n);
		n++;
	}
	printf("\n");
	return (0);
}
