#include "shell.h"

/**
 **_memset - uses an invariant byte to load memory.
 *@s: the memory area's pointer
 *@b: the byte with which to populate *s
 *@n: the number of bytes that must be loaded
 *Return: (s) A link to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * ffree - a string of strings is released
 * @pp: string of strings
 */
void ffree(char **pp)
{
	char **a = pp;

	if (!pp)
		return;
	while (*pp)
		free(*pp++);
	free(a);
}

/**
 * _realloc - shifts a memory chunk.
 * @ptr: a pointer to the earlier malloc'd block
 * @old_size: byte count of the preceding segment
 * @new_size: byte count of the fresh block
 *
 * Return: nameen is a pointer to the old block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!ptr)
		return (malloc(new_size));
	if (!new_size)
		return (free(ptr), NULL);
	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (p);
}

