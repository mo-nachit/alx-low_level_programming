#include "main.h"
/**
* print_alphabet - print all alphabet in lowercase
*/
void print_alphabet(void)
{
	char a;
	int i = 0;

	while (i <= 10)
	{
		for (a = 97 ; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
