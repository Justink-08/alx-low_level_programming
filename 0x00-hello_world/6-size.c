#include <stdio.h>

/**
 * main - print the size of various types
 *
 * Description: prints the size of various types on the computer it is compiled
 * and run on
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

	printf("Size of a char: %d byte(s)\r\n", (int) sizeof(char));
	printf("size of an int: %d byte(s)\r\n", (int) sizeof(int));
	printf("size of a long int: %d byte(s)\r\n", (int) sizeof(long int));
	printf("Size of a long long int: %d byte(s)\r\n", (int) sizeof(long long int));
	printf("Size of a float: %d byte(s)\r\n", (int) sizeof(float));

	return (0);


}
