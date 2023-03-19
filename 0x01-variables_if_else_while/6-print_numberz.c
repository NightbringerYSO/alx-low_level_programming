#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers from 0 to 10
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	putchar('\n');

	return (0);
}
