#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers passed as command line arguments.
 * @argc: The number of command line arguments.
 * @argv: An array of command line arguments.
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect.
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);
	return(0);
}
