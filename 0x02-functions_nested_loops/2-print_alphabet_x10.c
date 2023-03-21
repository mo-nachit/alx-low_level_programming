#include "main.h"
/**
* print_alphabet - print all alphabet in lowercase
*/
void print_alphabet_x10(void)
{
	char a;
	int i = 0;

	while (i <= 10)
	{
		a = 97;
		while(a <= 122)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
