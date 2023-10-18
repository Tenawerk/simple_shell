#include "shell.h"

/**
 * bfree - frees a pointer and NULLs the address
 * @ptr: pointer to free's adress
 *
 * Return: 1 = freed, otherwise = 0.
 */

int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
