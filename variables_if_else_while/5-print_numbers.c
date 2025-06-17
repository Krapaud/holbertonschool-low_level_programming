#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
