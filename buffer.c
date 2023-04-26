#include "main.h"

#define READ_BUFFER_SIZE 1024
/**
 * read_buffer_size - reads a buffer
 * @temp_buf: is the temp buffer where the info is stored
 * @more: is a temp struct used
 * @sze: is the size
 * Return: the value
 */
ssize_t read_buffer_size(more_t *more, size_t *sze, char *temp_buf)
{
	ssize_t rrd = 0;

	if (*sze == 0)
		return (0);
	rrd = read(more->readfile, temp_buf, READ_BUFFER_SIZE);

	if (rrd >= 0)
		*sze = rrd;

	return (rrd);
}
