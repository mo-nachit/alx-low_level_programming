#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */
int main(void)I
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("Enter first number: ");
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
