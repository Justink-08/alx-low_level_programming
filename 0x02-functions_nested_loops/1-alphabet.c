#include "main.h"

/*
 * main - a program that prints letter of the alphabets
 *
 * description :a fuction that prints alphabets
 *
 * return: Always (0) success
 *
 */

void print_alphabet(void)
{

	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
