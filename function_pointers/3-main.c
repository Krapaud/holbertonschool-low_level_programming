#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point for a simple calculator program.
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * This program performs basic arithmetic operations based on user input.
 * It expects three arguments: two integers and an operator.
 * If the input is invalid, it prints an error
 * message and exits with a specific code.
 *
 * Return: 0 on success, or exits with an error code on failure.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
