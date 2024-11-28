#include <unistd.h>
#include "main.h"

/*
 * printc - Print a char
 * @c: Character that will be printed
 * Return: Void
 */

void printc(int c)
{
	write (1, &c, 1)
}
