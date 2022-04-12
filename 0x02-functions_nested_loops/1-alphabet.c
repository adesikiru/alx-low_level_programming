#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - entry point
 *
 * Description: game program that prints alphabets
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
