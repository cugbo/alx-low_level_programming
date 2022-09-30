#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - adds two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), or 1 (Succes)
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *ptr;

	if (args < 2)
		printf("0\n");
	else
	{
		sum = 0;

		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			length = strlen(ptr);
			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
