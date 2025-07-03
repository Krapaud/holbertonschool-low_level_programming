#include <stdio.h>
#include <stdlib.h>
/**
 * main - Adds positive numbers passed as command line arguments.
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments.
 *
 * Return: 0 on success, 1 if any argument is not a digit.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)

		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
			printf("Error\n");
			return (1);
		}
	result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
