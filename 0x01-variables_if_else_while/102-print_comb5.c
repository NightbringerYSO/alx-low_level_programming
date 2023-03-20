#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A function to print all possible combination of two numbers
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0, n1;

	while (n <= 99)
	{
		n1 = n;
		while (n1 <= 99)
		{
			if (n1 != n)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);

				if (n != 98 || n1 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n1++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
