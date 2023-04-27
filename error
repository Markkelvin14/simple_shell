#include "main.h"

#define WRITE_BUFFER_SIZE 1024
#define BUFFER_EMPTY -1
#define READ_BUFFER_SIZE 1024

/**
 * print_error_msg - prints an error message
 * @more: pointer to the list
 * @err: string containing error
 * Return: 0
 */
void print_error_msg(more_t *more, char *err)
{
	_mputs(more->filename);
	_mputs(": ");
	_mputs(": ");
	_mputs(more->argv[0]);
	_mputs(": ");
	_mputs(err);
}

/**
 * _mputs - prints an input
 * @strr: the string printed
 * Return: nothing
 */
void _mputs(char *strr)
{
	int m = 0;

	if (!strr)
		return;
	while (strr[m] != '\0')
	{
		_mputchar(strr[m]);
		m++;
	}
}
/**
 * _mputchar - writes the character
 * @k: is a char to print
 * Return: 1
 */
int _mputchar(char k)
{
	static int m;

	static char temp_buf[WRITE_BUFFER_SIZE];

	m = 0;

	if (k == BUFFER_EMPTY || m >= WRITE_BUFFER_SIZE)
	{
		write(2, temp_buf, m);
	}
	if (k != BUFFER_EMPTY)
		temp_buf[m++] = k;
	return (1);
}
/**
 * _puts - prints a string
 * @string: the string to be printed
 * Return: Nothing
 */
void _puts(char *string)
{
	int m = 0;

	if (!string)
		return;
	while (string[m] != '\0')
	{
		_putchar(string[m]);
		m++;
	}
}
/**
 * _putchar - writes a character
 * @k: The character to print
 * Return: 1
 */
int _putchar(char k)
{
	static int m;

	static char temp_buf[WRITE_BUFFER_SIZE];

	m = 0;

	if (k == BUFFER_EMPTY || m >= WRITE_BUFFER_SIZE)
	{
		write(1, temp_buf, m);
	}

	if (k != BUFFER_EMPTY)
		temp_buf[m++] = k;
	return (1);
}
