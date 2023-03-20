#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a function to pirnt all possibel different
 *		combination of two digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0, n1;

	while (n <= 9)
	{
		n1 = 0;
		while (n1 <= 9)
		{
			if (n != n1 && n < n1)
			{
				putchar(n + 48);
				putchar(n1 + 48);

				if (n + n1 != 17)
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
