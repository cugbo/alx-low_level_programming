#include "main.h"
int get_length(char *s);
int my_pal(char *s, int l);
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 if it's not
 */
int is_palindrome(char *s)
{
	int length;

	length = get_length(s) - 1;
	return (my_pal(s, --length));
}
/**
 * get_length - gets the length of string
 * @s: string
 * Return: return length of string
 */
int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}
/**
 * my_pal - recursive check of palindrome
 * @s: string
 * @l: length of string
 * Return: 1 if palindrome, 0 if not
 */
int my_pal(char *s, int l)
{
	if (*s == *(s + 1))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}
