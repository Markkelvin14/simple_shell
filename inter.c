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
