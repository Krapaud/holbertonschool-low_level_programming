#ifndef FILE_IO_MAIN_H
#define FILE_IO_MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
