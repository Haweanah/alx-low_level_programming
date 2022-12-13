#include "main.h"

/*
 **
 *print_last_digit - print the last digit of the number
 *Description: code by Haweanah
 *@n: the number to be printed
 *Return: value of the last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	_putchar('\n');
	return (0);
}
