#include <stdio.h>
/**
 * main - headers goes there
 * discribtion:"prints numbers of base 10 using putchar"
 * Return: always 0
*/
int main(void)
{
	int c;

	c = 0;
	while (c < 10)
	{
		putchar(c + '0');
			c++;
	}
	putchar('\n');
	return (0);
}
