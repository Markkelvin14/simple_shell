#include "main.h"
/**
 * print_current_env - prints only the str element of a linked list
 * @ptr: pointer to first node
 * Return: size of list
 */
size_t print_current_env(const list_t *ptr)
{
	size_t m = 0;

	while (ptr)
	{
		_puts(ptr->str ? ptr->str : "(nill)");
		_puts("\n");

		ptr = ptr->next;
		m++;
	}
	return (m);
}

/**
 * current_env - prints the current environment
 * @more: a pointer to a structure containing arguments
 * Return: Always 0
 */
int current_env(more_t *more)
{
	print_current_env(more->env);
	return (0);
}
