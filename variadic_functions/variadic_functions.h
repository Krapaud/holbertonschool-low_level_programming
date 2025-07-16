#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

/**
 * struct print - Structure for printing different types
 * @c: Character string
 * @f: Function pointer to print function
 */
typedef struct print
{
	char *c;
	void (*f)(va_list);
} print_t;

int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
