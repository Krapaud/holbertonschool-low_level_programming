#include "main.h"
#include <stdio.h>
/**
 * main - prints the numbers from 1 to 100, but for mul
 *        prints "Fizz" instead of the number and for
 *        prints "Buzz". For numbers which
 *        prints "FizzBuzz".
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != 100)
		putchar (' ');
	}
	putchar('\n');
	return (0);
}
