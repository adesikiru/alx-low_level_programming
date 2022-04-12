#include "main.h"
#include <stdio.h>

/**
 * alhabet - entry point
 *
 * Description: a program for alphabet game that prints alphabet
 *
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
