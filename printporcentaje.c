#include <unistd.h>
#include "main.h"

/*
 * printporcentaje - Print %
 * @c: Character that will be printed
 * Return: Void
 */

void printporcentaje(int c)
{
        write (1, &c, 1);
}
