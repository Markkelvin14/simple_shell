#include "main.h"
/**
 * clear_comments_frm_code - clears comments
 * @temp: pointer to the str
 * Return: nothing
 */
void clear_comments_frm_code(char *temp)
{
	int m;

	while (temp[m] != '\0')
	{
		m++;
	}
	if (temp[m] == '#' && (!m || temp[m - 1] == ' '))
	{
		temp[m] = '\0';
	}
}
