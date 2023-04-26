#include <stdio.h>
#include <stdlib.h>
/**
 * getline_func - creates a prompt
 * Return: 0
 */

char getline_func(void)
{
	char *buffer;
	size_t byts = 10;
	/**ssize_t m = 0;*/

	buffer = malloc(sizeof(char) * byts);
	if (buffer == NULL)
	{
		return (0);
	}
	printf("Mark&Musty$ ");

	getline(&buffer, &byts, stdin);

	printf("output is: %s", buffer);

	printf("Mark&Musty $ ");
	getline(&buffer, &byts, stdin);

	printf("output is: %s", buffer);

	printf("Mark&Musty$ ");
	getline(&buffer, &byts, stdin);

	return (0);
}
