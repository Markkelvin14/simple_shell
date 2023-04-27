#include "main.h"

/**
 * check_line - check the line.
 * Return: Pointer to string.
 */
char *check_line(void)
{
	char *str = NULL;
	size_t k = 0;
	int rd = getline(&str, &k, stdin);

	if (rd == EOF)
	{
		free(str);
		if (isatty(STDIN) != 0)
			write(STDOUT, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	return (str);
}

/**
 * _path - check if command exists in path
 * @str: string
 * Return: path
 */

char *_path(char **str)
{
	char *bre = getenv("PATH");
	char *c = str[0];
	char *cmd = NULL;
	struct stat st;
	size_t s;
	char *way;

	if (!bre)
		return (c);
	way = strtok(bre, ":");
	while (way)
	{
		s = strlen(way) + strlen(c) + 2;
		cmd = malloc(sizeof(char) * s);
		if (cmd == NULL)
			return (NULL);

		_mstrcpy(cmd, way);
		_mstrncat(cmd, "/");
		_mstrncat(cmd, c);
		if (stat(cmd, &st) == 0 && st.st_mode & X_OK)
			return (cmd);
		way = strtok(NULL, ":");
		free(cmd);
	}
	return (c);
}

/**
 *  * check_env - check environment
 * Return: value.
 */
char *check_env(void)
{
	int m;
	char **env = NULL, *ph = NULL;

	env = environ;
	for (m = 0; env[m] != NULL; m++)
	{
		if (_mstrncmp("PATH", env[m], 4) == 0)
			ph = env[m];
	}
	if (ph != NULL)
	{
		while (*ph != '=')
			ph++;
		ph++;
	}
	return (ph);
}
/**
 *  * check_cmdargs - check command in the path
 * @str: string.
 * @res: result
 * Return: value
 */

int check_cmdargs(char **str, int res)
{
	int m = 0;
	char *way = NULL;
	struct stat st;

	way = malloc(sizeof(char *) * string_count(str[0]));

	_mstrcpy(way, str[0]);

	if (stat(str[0], &st) == 0 && way[0] != '/')
		str[0] = _path(str);
	else if (stat(str[0], &st) == -1)
		str[0] = _path(str);

	if (_mstrcmp(way, str[0]) != 0)
		m = 1;
	if (stat(str[0], &st) == 0)
		res = exe_cmd(str, res);
	else
	{
		print_error_msg(str[0]);
		res = 127;
	}
	if (m == 1)
		free(str[0]);
	free(way);
	return (res);
}
