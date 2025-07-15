#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * get_op_func - Selects the correct operation function based on the operator.
 * @s: The operator passed as a string.
 *
 * This function returns a pointer to the appropriate operation function
 * based on the operator provided. If the operator is not recognized,
 * it returns NULL.
 *
 * Return: Pointer to the function that corresponds to the operator,
 *         or NULL if the operator is not found.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
