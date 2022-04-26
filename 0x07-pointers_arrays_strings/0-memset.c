#include "main.h"

/**
 * _memset - Entry Point
 * @s: Variable
 * @b: Variable
 * @n: Loop
 * Return: Always 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
chmod u+x 0-memset.c && git add --chmod=+x 0-memset.c && git commit -m 'task 00' && git push