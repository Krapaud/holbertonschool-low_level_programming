#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - prints a character
 * @args: the list of arguments
 *
 * Return: nothing
 */

void print_char(va_list args)
{
	 printf("%c", va_arg(args, int));
}
/**
 * print_int - prints an integer
 * @args: the list of arguments
 */

void print_int(va_list args)
{
	 printf("%d", va_arg(args, int));
}
/**
 * print_float - prints a float
 * @args: the list of arguments
 */

void print_float(va_list args)
{
	 printf("%f", va_arg(args, double));
}
/**
 * print_string - prints a string
 * @args: the list of arguments
 *
 * Return: nothing
 */

void print_string(va_list args)
{
	char *str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
			return;
		}
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	unsigned int j;
	const char *separator = "";

	print_t p[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}};

	va_start(args, format);

		while (format && format[i])
		{
			j = 0;
			while (p[j].c != NULL)
			{
			if (format[i] == p[j].c[0])
			{
				printf("%s", separator);
				p[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
