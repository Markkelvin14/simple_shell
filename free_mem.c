#include "main.h"
/**
 * free_mem - frees memory
 * @px: is a pointer to the memory
 * Return: 0
 */
int free_mem(void **px)
{
	if (px && *px != NULL)
	{
		free(*px);
		*px = NULL;
		return (1);
	}
	return (0);
}
