#include "main.h"

/**
 * token_check - arguments in tokens
 * @temp_buf: temp buf for argu
 * Return: pointer to the mem
 */

char **token_check(char *temp_buf)
{
	char *brou = NULL;
	char **strr = NULL;
	int m = 0, s = 0;

	while (temp_buf[s] != '\0')
		s++;
	strr = malloc(sizeof(char *) * s);
	if (strr == NULL)
		return (NULL);

	brou = strtok(temp_buf, USE_DELIM);
	strr[m] = brou;
	for (m = 1; brou != NULL; m++)
	{
		brou = strtok(NULL, USE_DELIM);
		strr[m] = brou;
	}
	return (strr);
}
