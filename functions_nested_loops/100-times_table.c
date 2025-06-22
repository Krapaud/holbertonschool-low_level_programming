#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table (void)
{
    int a, b, result;

    for (a = 0; a <= 12; a++) {
        for (b = 0; b <= 12; b++) {
            result = a * b;

            if (b != 0) {
                _putchar (',');
                _putchar (' ');
                if (result < 13)
                    _putchar (' ');
            }

            if (result >= 10) {
                _putchar ((result / 10) + '0');
                _putchar ((result % 10) + '0');
            } else {
                _putchar (result + '0');
            }
        }
        _putchar ('\n');
    }
}
