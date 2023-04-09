#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the result of the addition, followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int r = 0;
	int i;
	int j;

	if (argc == 1)
	{
		printf("%i\n", 0);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	       r += atoi(argv[i]);
	}
	printf("%d\n", r);
	return (0);
}
