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
	if (argc == 1)
	{
		printf("%i\n", 0);
		return (1);
	}
	int arg1 = 0;
	int  j;

	for (int i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		arg1 += atoi(argv[i]);
	}
	printf("%d\n", arg1);
	return (0);
}
