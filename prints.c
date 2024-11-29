#include <unistd.h>
#include "main.h"

/**
 * printstring - Print a string
 * @str: Character that will be printed
 * Return: Void
 */

int printstring(char *str)
{
	int i, count = 0;

	if (str == NULL)
		return (write(1, "(null)", 6));

	for (i = 0; str[i] != '\0'; i++)
	{
		write(1, &str[i], 1);
		count++;
	}
	return (count);
}
