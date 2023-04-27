#include "main.h"

/**
 * print_error_msg - Print error message
 * @str: is a string
 */

void print_error_msg(char *str)
{
	int m = 0;

	m = string_count(str);

	write(STDERR, str, m);
	write(STDERR, ": failed\n", 12);
}
