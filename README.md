#_printf

INTRO
This is a custom implementation of the printf function in C that supports the format specifiers %d, %i, %c, %s, and %%. It allows printing integers, positive and negative, individual characters, strings, and the percent symbol (%). It is a basic yet functional version that mimics the behavior of the standard printf function.

FILES:

main.h:
This file contains the libraries and prototypes necessary for the program to work correctly.

main.c:
This file contains cases for the verification .

_printf.c:
This is the function that contains the main code, this will be in charge of making the conversions once the input arrives.

printc.c 
This program implements a function called printc that prints a single character to the standard output (screen). It uses the write function from the <unistd.h> library to write the character to the output. The function takes a parameter, c, which is the character to be printed, and returns the value 1 to indicate that a character has been successfully printed.

printid.c
This program implements a function called printid that prints an integer in decimal format. The function takes an integer, id, as input and prints it to the standard output. It handles special cases such as printing zero and negative numbers. If the number is negative, it first prints a minus sign and then converts the integer to positive before printing each digit. The number is broken down into digits using a buffer, and each digit is printed individually using the write function.

printporcentaje.c
This program implements a function called printporcentaje that prints the percent symbol (%) to the standard output. The function takes an integer parameter, c, which represents the character to be printed (in this case, the percent symbol).

prints.c
The printstring function is responsible for printing a string of characters to standard output using the system's write function.
If the string str is NULL, the function will print (null) and return the number of characters printed. Steps through the string character by character, writing each one to standard output and counting the total number of characters printed. Returns the number of characters printed.
Returns an integer representing the total number of characters printed.


RETURN: The program return the total number of characters.

Conversion Specifiers:
%c: Displays a single character. This functionality is implemented in the print_char function, which uses the write system call. 
%s: Prints a string of characters. This feature is found in print_str, which handles null strings by returning an error. 
%%: Displays a percentage sign. This case is handled directly in the _printf function.
%d / %i: Presents a decimal number. The implementation is done in print_num, which deals with both positive and negative numbers





AUTHOR: Juan Ignacio Daste
