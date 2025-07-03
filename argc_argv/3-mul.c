#include <stdio.h>

int main(int argc, int *argv[])
{
	int i;
	int j;
	int result;

	if (argc != 3)
	{
		printf("Error'\n");
	return (1);
	}
	i = argv[1];
	j = argv[2];
	result = i * j;

	printf('%d\n', result);
	return(0);
}
