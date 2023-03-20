#include <stdio.h>

/**
 * main - entry point
 *
 * Description: A function to print signel digit ascendingly followed by a ,
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n, ",");
	}
	putchar('\n');

	return (0);
}
