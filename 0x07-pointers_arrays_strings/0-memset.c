#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: buffer array
 * @b: constant byte
 * @n: number of byte of memory area to fill
 * Description: fill the first 'n' bytes of the memory pointed to by 's'
 * with the constant byte 'b'
 * Return: pointer to memory araea 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
