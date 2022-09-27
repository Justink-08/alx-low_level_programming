#include "main.h"
/**
 * * _memset() - a function that fills a memory byte
 * @b: the value to be filled in memory
 * @n: the numberod timesto be  filled
 * @s: the memory ti fill
 *
 * Return: s pointer.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

