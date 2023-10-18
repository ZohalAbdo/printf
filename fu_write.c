#include "main.h"
/**
 * wr_correct - call the write function Use a local buffer
 * @buffer: array
 * @l: length
 * Return: void
 **/
void wr_correct(const char *buffer, int l)
{
	int wr = write(1, buffer, l);

	if (wr == -1)
	{
		exit(1);
	}
}

/**
 * wr_error - call the write function Use a local buffer
 * @buffer: array
 * @l: length
 * Return: void
 **/
void wr_error(const char *buffer, int l)
{
	int wr = write(2, buffer, l);

	if (wr == -1)
	{
		exit(1);
	}
}
