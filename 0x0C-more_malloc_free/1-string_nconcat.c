#include "main.h"
#include <stdlib.h>

/**
* _strlen - finds the length of string
* @str: string
*
* Return: length of the string
*/

int _strlen(char *str)
{
	int len = 1;

	while (str[len] != '\0')
		len++;

	return (len);
}

/**
* string_nconcat - concatenates two strings only n bytes of s2
* @s1: first string
* @s2: second string
* @n: number of bytes specified
*
* Return: NULL if fail, else pointer to malloc memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	ptr = malloc(len1 + n + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0, j = 0; i < (len1 + n); i++)
	{
		if (i < len1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[j++];

	}
	ptr[i] = '\0';
	return (ptr);
}
