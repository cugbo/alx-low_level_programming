#include "main.h"
/**
 * _strncat - two words
 * @dest: string
 * @src: string
 * @n: int parameter
 * Return: 'dest' edited string
 */
char *_strncat(char *dest, char *src, int n)
{
	int m, i;

	m = 0;
	for (i = 0; i < 1000; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		m++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + i] = src[i];
	}
	dest[m + i] = '\0';
	return (dest);
}
