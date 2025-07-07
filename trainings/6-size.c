#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("The size of a char is: %lu bytes\n", sizeof(char));
	printf("The size of a int is : %lu bytes\n", sizeof(int));
	printf("The size of a long int is : %lu bytes\n", sizeof(long));
	printf("The size of a long long int is : %lu bytes\n", sizeof(double));
	printf("The size of a float is : %lu bytes\n", sizeof(float));

	return (0);
}
