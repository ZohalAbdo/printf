#include "main.h"
/**
 *wr_correct - call the write function Use a local buffer
 *@buffer: array
 *@l: length
 *Return:void
 */
void wr_correct (char* buffer, int l)
{
	int wr = write(1, buffer, l);


	if (wr == -1)
	{
		break;
	}
}
/**
 *wr_error - call the write function Use a local buffer
 *@buffer: array
 *@l: length
 *Return:void
 */
void wr_error(char* buffer, int l)
{
	int wr = write(2, buffer, l);
	if (wr == -1)
	{
		break;
	}
}
