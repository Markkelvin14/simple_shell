#include "main.h"
#define BUFFER_EMPTY -1
/**
 * main - main code
 * @argc: argu count
 * @argv: argu vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int filed = 2;

	getline_func();

	if (argc == 2)
	{
		filed = open(argv[1], O_RDONLY);
		if (filed == -1)
		{
			if (errno == EACCES)
				exit(126);

			if (errno == ENOENT)
			{
				_mputs(argv[0]);
				_mputs(": 0: failed ");
				_mputs(argv[1]);
				_mputchar('\n');
				_mputchar(BUFFER_EMPTY);

				exit(127);
			}
			return (EXIT_FAILURE);
		}
	}
	return (EXIT_SUCCESS);
}
