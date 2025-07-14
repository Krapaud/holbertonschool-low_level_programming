#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to print.
 * @f: Pointer to the function that prints the name.
 *
 * This function checks if the name and function pointer are not NULL,
 * and then calls the function pointed to by f with the name as an argument.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
