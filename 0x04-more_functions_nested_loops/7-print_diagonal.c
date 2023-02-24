#include "main.h"
/**
 * print_digonal - Draws a digonal line according to parameter
 * @n: The numbers of times to print digonal lines
 * Return: empty
 */
void print_digonal(int n)
{
    int x,y;
    if(n <= 0)
    {
            _putchar('\n');
    }
    else
    {
            for (x = 0; x < n; x++)
            {
		    for (y = 0; y < n; y++)
		    {
                    _putchar(32);
		    }
		    _putchar(92);
		    _putchar('\n');
	    }
    }
}
