#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024
#define PERMISSIONS 0664

/**
 * close_files - closes file descriptors and handles errors
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @close_from: whether to close source fd
 * @close_to: whether to close destination fd
 */
void close_files(int fd_from, int fd_to, int close_from, int close_to)
{
	if (close_from && close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close_to && close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
}

/**
 * copy_content - copies content from one file to another
 * @fd_from: source file descriptor
 * @fd_to: destination file descriptor
 * @filename: destination filename for error messages
 */
void copy_content(int fd_from, int fd_to, char *filename)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			close_files(fd_from, fd_to, 1, 1);
			exit(99);
		}
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, or exit with specific codes on error
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, PERMISSIONS);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close_files(fd_from, 0, 1, 0);
		exit(99);
	}

	copy_content(fd_from, fd_to, argv[2]);
	close_files(fd_from, fd_to, 1, 1);
	return (0);
}
