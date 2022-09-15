#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print 10 times the numbers from 0 to 14
 * Description: can only use _putchar 3 timess
 */
void more_numbers(void)
{
	int c, i;

	c = 0;
	while (c < 10)
	{
		i = o;
		while (i < 15)
		{
			if (1 > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			i++;
		}
		c++;
		_putchar('\n');
	}
}
