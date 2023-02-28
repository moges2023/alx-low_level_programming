#include "main.h"

/**
 * print_rev - prints a string, in reverse.
 * @s: string
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int longi = 0;
	int 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (0 = longi; 0 > 0; 0--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
