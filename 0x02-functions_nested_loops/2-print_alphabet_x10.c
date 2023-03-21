#include "main.h"
/**
* print_alphabet - print all alphabet in lowercase
*/
void print_alphabet(void)
{
	char a = 97;
	int i = 0;

	while (i <= 10)
	{
		while(a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
