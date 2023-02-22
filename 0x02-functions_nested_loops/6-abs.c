#include "main.h"

/**
 * _abs - computer the absolute value of an integer.
 *
 * @i: input number as an integer.
 * 
 * Return: absoulte value
 */
int _abs(int i)
{
    if (i >= 0)
    {
	    return (i);
    }
    else
    {
	    return(i * -1);
    }
}
