#include "main.h"
#include <stdio.h>

/**
 * _islower - Entry Point
 *
 * Description: a function that checks for
 * lowercase characters.
 *
 * @c: contain value to be compared
 *
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
