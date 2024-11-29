#include <unistd.h>
#include "main.h"

/**
 * printc - Print a char
 * @c: Character that will be printed
 * Return: Void
 */

int printc(char c)
{
	write(1, &c, 1);
	return (1);
}
