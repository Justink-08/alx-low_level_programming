#include "main.h"

/**
 *
 * print_most_numbers- without 2 and 4 on a new line
 *
 * return:Always (0)
 * */
void print_most_numbers(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		if (j != 2 && j != 4)
		{
			_putchar(j + '0');
		}
	}
}

