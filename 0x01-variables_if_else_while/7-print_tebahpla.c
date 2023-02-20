#include <stdlib.h>
/**
 * main - Entry point
 * discribtion:"prints alphabet in reverse"
 * Return: always 0
*/
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
