#include "main.h"

/**
 * exit_cmd - exits the shell
 * @more: is a linked list
 * Return: exit
 */

int exit_cmd(more_t *more)
{
	int xit;

	if (more->argv[1])
	{
		xit = error_atoi(more->argv[1]);
		if (xit == -1)
		{
			more->status = 2;
			print_error_msg(more, "failed; ");
			_mputs(more->argv[1]);
			_mputchar('\n');

			return (1);
		}
		more->er_num = error_atoi(more->argv[1]);

		return (-2);
	}
	more->er_num = -1;

	return (-2);
}
/**
 * error_atoi - converts a string to an integer
 * @str: is a the string
 * Return: 0 or -1
 */
int error_atoi(char *str)
{
	int m = 0;
	unsigned long int ans = '0';

	if (*str == '+')
		str++;
	while (str[m] != '\0')
	{
		m++;
		if (str[m] >= '0' && str[m] <= '9')
		{
			ans *= 10;
			ans += (str[m] - '0');

			if (ans > INT_MAX)
				return (-1);
		}
		else
			return (-1);
	}
	return (ans);
}
