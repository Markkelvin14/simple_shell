#include "main.h"

/**
 * built_in_cmd - execute built-in commds
 * @str: string.
 * @res: result
 * @bre: argu
 * Return: -1 or 0
 */

int built_in_cmd(char **str, int res, char *bre)
{
	char *inbuilt_cmd[2] = {"exit", "env"};
	int m = 0, k;
	char *env = NULL;

	if (_mstrcmp(inbuilt_cmd[0], str[0]) == 0)
	{
		free(str);
		free(bre);
		exit(res);
	}
	else if (_mstrcmp(inbuilt_cmd[1], str[0]) == 0)
	{
		for (m = 0; environ[m]; m++)
		{
			env = environ[m];
			k = string_count(env);
			write(STDOUT, env, k);
			write(STDOUT, "\n", 1);
		}
	}
	return (0);
}
/**
 * check_builtin - check for built in cmds
 * @str: string.
 * @res: res.
 * @bre: arguments.
 * Return: the cmds
 */

int check_builtin(char **str, int res, char *bre)
{
	char *cmds[2] = {"exit", "env"};

	if (*str == NULL)
		return (1);
	else if (_mstrcmp(cmds[0], str[0]) == 0)
		return (built_in_cmd(str, res, bre));
	else if (_mstrcmp(cmds[1], str[0]) == 0)
		return (built_in_cmd(str, res, bre));
	else
		return (check_cmdargs(str, res));
}
