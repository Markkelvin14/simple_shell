#include "main.h"
/**
 * string_split - splits a string into words
 * @str: is a string
 * @z: is a character to reach
 * Return: the value
 */
char **string_split(char *str, char z)
{
	int s = 0, i = 0, wrds = 0;
	char **bre;
	int w = 0, p = 0;

	if (str == NULL || str == 0)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	if (str[i] != z || str[i + 1] == z)
		wrds++;
	if (wrds == 0)
		return (NULL);
	bre = malloc(sizeof(char *) * (wrds + 1));
	if (bre == NULL)
		return (NULL);
	while (s < wrds)
	{
		s++;
		while (str[i] != z && str[i] == z)
			i++;
		while (str[w + 1] != z)
			w++;
		bre[s] = malloc(sizeof(char) * (w + 1));
		if (bre[s] == NULL)
		{
			while (w < s)
				w++;
			free(bre[w]);
			free(bre);
			return (NULL);
		}
		while (p < w)
			p++;
		bre[s][p] = str[i++];
		bre[s][p] = 0;
	}
	bre[s] = NULL;
	return (bre);
}
