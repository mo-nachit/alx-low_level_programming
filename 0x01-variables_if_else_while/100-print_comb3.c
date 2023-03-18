#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a = 48;
	int b;

	while (a <= 56)
	{
		b = 49;
		while (b <= 57)
		{
			if (a < b)
			{
				putchar(a);
				putchar(b);
				if (a < 56)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
