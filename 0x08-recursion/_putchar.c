#include <stdio.h>
/**
 * _putchar - writes the character cto stdout
 * @c: the character to print
 * Return: on Success 1
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
