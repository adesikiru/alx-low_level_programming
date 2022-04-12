#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Entry Point
 *
 * Description: function that prints 10 times the alphabet,
 * in lowercase, followed by a new line
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{

	int ch, counter = 0;

	while (counter < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		counter++;
		_putchar('\n');
	}

}
