#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integar
 * @b: second integar
 * @c: third integar
 * Return: largest number
 */

int largest_number(int a, int b, int c)

{
        int largest;

        if (a >= b && a >= c)
        {
        largest = a;
        }
        else if (b >= a && b >= c)
        {
        largest = c;
        }
        else
        {
        largest = c;
        }
	return (largest);
}
