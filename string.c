#include "shell.h"

/**
 * _strlen - returns a string's length
 * @s: the string whose length is to be checked
 *
 * Return: string length in integers
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - compares two strangs lexicographically.
 * @s1: first strang
 * @s2: second strang
 *
 * Return: Negative if s1 < s2, positive if > s2, zero if = s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - finds when the needle begins with haystack.
 * @haystack: string to look for
 * @needle: the substring to be found
 *
 * Return: address of the following haystack char or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - combines two strings
 * @dest: endpoint buffer
 * @src: The initial buffer
 *
 * Return: endpoint buffer pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}

