#include "main.h"

/**
 *print_last_digit - last digit
 *
 *@n:The int to print
 *Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit = num % 10;
	
	last_digit = last_digit < 0 ? -1 * last_digit : last_digit;
		_putchar(last_digit + '0');
		return (last_digit < 0 ? -1 * last_digit : last_digit);
}
