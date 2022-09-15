#include <main .h>

/*
 * main - a program that prints letter of the alphabets
 *
 * return: Always (0) success
 *
 */

void print_alphabet(void);
{

	int x;
	for (x = 'a'; x <= 'z'; x++)
	{
	
		_putchar(x);
	
	}
	_putchar('/n');

}
