#include "main.h"

/**
 * _islower.c - check if a char is lowercase
 * @c: the character
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
