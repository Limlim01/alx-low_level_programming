#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * 
 * Return: On success 1. 
 * On error, -1 is returned,and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
#include"main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
	_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
