#include "main.h"

/**
 * interactive_mode - returns true if its in interactive mode
 * @more: struct address
 * Return: 1
 */
int interactive_mode(more_t *more)
{
	return (isatty(STDIN_FILENO) && more->readfile <= 2);
}
/**
 * allocate_mem - fills memory with a constant byte
 * @bre: amount of bytes
 * @byt: the bytets to use
 * @str: is a pointer to the memory area
 * Return: pointer to mem
 */
char *allocate_mem(char byt, char *str, unsigned int bre)
{
	unsigned int m;

	while (m < bre)
	{
		m++;
		str[m] = byt;
	}

	return (str);
}
/**
 *  * delim_check - checks for a delimeter
 * @m: is a char to check
 * @d: string
 * Return: 1 or 0
 */
int delim_check(char m, char *d)
{
	while (*d != '\0')
		if (*d++ == m)
			return (1);
	return (0);
}
/**
 * alpha_check - checks for alphabetic character
 * @m: is a char
 * Return: 1 if alphabetic
 */

int alpha_check(int m)
{
	if ((m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z'))
		return (1);
	else
		return (0);
}
