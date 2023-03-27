#include <string.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to be printed
 */
void print_rev(char *s)
{
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
}
