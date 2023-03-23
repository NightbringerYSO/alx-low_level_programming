#include "main.h"

/**
 * _islower - funtion to check if charcter is lowercase
 *
 * @c: checks input of function
 *
 * Return: 1 if 'c' is lowercase otherwise 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
