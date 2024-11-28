#include <unistd.h>
#include "main.h"

/*
 * printc - Print a char
 * @c: Character that will be printed
 * Return: Void
 */

int printc(int c)
{
	return(write (1, &c, 1));
}
