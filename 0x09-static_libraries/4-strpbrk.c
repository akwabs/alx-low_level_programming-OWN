
BIGRIZZY
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x09-static_libraries/4-strpbrk.c
@BIGRIZZY
BIGRIZZY none
 1 contributor
27 lines (23 sloc)  459 Bytes
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of butes to be searched for.
 *
 * Return: If a set is matched - a pointer to be matched byte.
 * If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
