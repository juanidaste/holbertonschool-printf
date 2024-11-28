#include <unistd.h>
#include "main.h"

/*
 * printporcentaje - Print a string
 * @c: Character that will be printed
 * Return: Void
 */

int printstring(char *str)
{
        return(write(1, str, strlen(str)));
}
