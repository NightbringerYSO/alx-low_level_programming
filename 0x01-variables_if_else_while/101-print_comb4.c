#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print 012, 013, ...,  789
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0, n1, n2;

	while (n <= 9)
	{
		n1 = 0;
		while (n1 <= 9)
		{
			n2 = 0;
			while (n2 <= 9)
			{
				if (n != n1 && n < n1 && n1 != n2 && n1 < n2)
				{
					putchar(n + 48);
					putchar(n1 + 48);
					putchar(n2 + 48);

					if (n + n1 + n2 < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n2++;
			}
			n1++;
		}
		n++;
	}
	putchar('\n');

	return (0);
}
