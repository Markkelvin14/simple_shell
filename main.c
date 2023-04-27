#include "main.h"

/**
 * main - main code
 * Return: 0
 */

int main(void)
{
	char *rd = NULL;
	char **tk = NULL;
	int res = 0;

	while (1)
	{
		if (isatty(STDIN))
			write(STDOUT, " ($) ", 7);

		rd = check_line();
		tk = token_check(rd);
		res = check_builtin(tk, res, rd);

		free(rd);
		free(tk);
	}
	return (0);
}
