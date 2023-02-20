#include <stdlib.h>
/**
 * main - headers goes there
 * discribtion:"prints numbers of base 10 using putchar"
 * Return: always 0
*/
int main(void)
{
	int s = 97, e = 122;

	while (e >= s)
	{
		putchar(e);
		e--;
	}

	putchar('\n');
	
	return (0);
}
