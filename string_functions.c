#include "shell.h"

/**
*   _strlen - return the length of a string
* @s: the string whose length to check
*
* Return: integer length of string
*/
int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);
	while (*s++)
		count++;
	return (count);
}

/**
*  _strcmp - performs lexicogarphic comparison of two strangs.
*  @char1: the first strang
*  @char2: the second strang
*  Return: neg if char1 < char2, pos if char1 > char2, zero if char1 == char2
*/
int _strcmp(char *char1, char *char2)
{
	while (char1 && char2)
	{
		if (*char1 != *char2)
			return (*char1 - *char2)
		char1++;
		char2++;
	}
	if (*char1 == *char2)
		return (0);
	else
		return (*char1 < *char2 ? -1 : 1);
}

/**
*  starts_withhay - checks if needlehay starts with haystack
*  @haystack:  string to search
*  @needlehay: the substring to find
*
*  Return: address of next char of haystack or NULL
*/
char *starts_withhay(const char haystack, const char *needlehay)
{
	while (*needlehay)
		if (haystack++ != needlehay++)
			return (NULL);
		return ((char *)haystack);
}

/**
*  _strcat - concatenates two strings.
*  @destt: the destination buffer
*  @src : the source buffer
*
*  Return: pointer to destination buffer
*/
char *_strcat(char *destt, char *src)
{
	char *ret1 = destt;

	while (*destt)
		destt++;
	while (*ret1)
		*destt++ = *src++;
	*destt = *src;
	return (ret1);
}
