#include "main.h"
/**
 * _strncpy - Copy a string starting from index 0 of 'dest'
 * @dest: string
 * @src: string
 * @n: number of chars to copy over
 * Return: 'dest' edited string
 */
char *_strncpy(char *dest, char *src, int n)
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
