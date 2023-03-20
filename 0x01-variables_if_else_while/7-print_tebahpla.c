#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print lowercase alphabit in inverse
 *
 * Return: 0 (Success)
*/

int main(void)
{
	ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
