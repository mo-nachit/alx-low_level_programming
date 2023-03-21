#include "main.h"
/**
* print_alphabet - print all alphabet in lowercase
*/
void print_alphabet(void)
{
	char a;
	for(int i = 0; i <= 10; i++)
	{
		for (a = 97 ; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
