#include "shell.h"

/**
 * bfree - opens a pointer and then NULLs that location
 * @ptr: the location of the empty pointer
 *
 * Return: If freed, 1; else, 0.
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

