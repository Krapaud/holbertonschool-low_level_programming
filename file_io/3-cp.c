#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * cpy - copies the contents of one file to another
 * @src: source file pointer
 * @dest: destination file pointer
 */
void cpy(FILE *src, FILE *dest)
{
	char buf[BUFSIZ];
	size_t n;

	while ((n = fread(buf, 1, sizeof(buf), src)) > 0)
	{
		if (fwrite(buf, 1, n, dest) != n)
		{
			fprintf(stderr, "write error\n");
			exit(4);
		}
	}

	if (ferror(src))
	{
		fprintf(stderr, "read error\n");
		exit(5);
	}
}
/**
 * * main - copies a file
 * * @argc: argument count
 * * @argv: argument vector
 * * Return: 0 on success, non-zero on error
 */
int main(int argc, char **argv)
{
	FILE *src, *dest;

	if (argc != 3)
	{
		fprintf(stderr, "usage: cpy src dest\n");
		return (1);
	}

	src = fopen(argv[1], "rb");

	if (src == NULL)
	{
		fprintf(stderr, "cannot open %s for reading\n", argv[1]);
		return (2);
	}

	dest = fopen(argv[2], "wb");
	if (dest == NULL)
	{
		fprintf(stderr, "cannot open %s for writing\n", argv[2]);
		fclose(src);
		return (3);
	}
	cpy(src, dest);
	fclose(src);
	fclose(dest);

	return (0);
}
