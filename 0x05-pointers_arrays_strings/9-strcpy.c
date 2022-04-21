#include "main.h"
#include <string.h>

/**
 * _strcpy - Entry point
 * @dest: First variable
 * @src: Source Variable
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = strlen(src);
	for (i = 0; i <= len; i++)
	{

		dest[i] = src[i];
	}
	return (dest);
}
