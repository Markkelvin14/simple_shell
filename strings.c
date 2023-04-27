#include "main.h"

/**
 * _mstrncat - adds two strings
 * @loc: string to be moved
 * @souc: main string
 * Return: is a Pointer
 */
char *_mstrncat(char *loc, char *souc)
{
	int m = 0;
	int k = 0;

	while (loc[m] != '\0')
		m++;
	for (k = 0; souc[k] != '\0'; k++, ++m)
		loc[m] = souc[k];
	loc[m] = '\0';

	return (loc);
}
/**
 * _mstrncmp - compare strings
 * @string1: first string
 * @string2: sec string
 * @length: length of the string
 * Return: 0, or -1
 */
int _mstrncmp(char *string1, char *string2, int length)
{
	for (; *string1 && *string2 && length >= 0; length--)
	{
		if (*string1 == *string2)
		{
			string1++;
			string2++;
		}
		else
			return (-1);
	}
	return (0);
}
/**
 * _mstrcmp - Compares two strings
 * @string1: first string
 * @string2: sec string
 * Return: 0
 */

int _mstrcmp(char *string1, char *string2)
{
	int m;

	for (m = 0; string1[m] != '\0'; m++)
	{
		if (string1[m] != string2[m])
			return (string1[m] - string2[m]);
	}
	return (0);
}
/**
 * _mstrcpy - Copies the string.
 * @loc: location
 * @souc: source string
 * Return: Pointer to the location
 */
char *_mstrcpy(char *loc, char *souc)
{
	int m;

	for (m = 0; souc[m] != '\0'; m++)
		loc[m] = souc[m];
	loc[m] = '\0';
	return (loc);
}
/**
 * string_count - counts a string characters
 * @str: String to count
 * Return: no of characters
 */

int string_count(char *str)
{
	int m = 0;

	while (str[m] != '\0')
		m++;
	return (m);
}
