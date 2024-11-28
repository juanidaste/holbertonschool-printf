#include <unistd.h>
#include "main.h"

/*
 * printporcentaje - Print a string
 * @c: Character that will be printed
 * Return: Void
 */

void  printstring(char *str)
{
	while(str[i] != '\n')
	{
        write (1, &str[i], 1)
	}
}
