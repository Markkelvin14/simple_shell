#include "main.h"

/**
 * exe_cmd - execute command
 * @str: string
 * @res: result
 * Return: value
 */
int exe_cmd(char **str, int res)
{
	pid_t p;
	int m;

	p = fork();

	if (p == 0)
	{
		if (execve(str[0], str, NULL) == -1)
			perror("Alert: warning");
	}
	else if (p == -1)
		perror("Alert: failure");
	else
	{
		wait(&m);
		if (WIFEXITED(m))
		res = WEXITSTATUS(m);
	}
	return (res);
}
