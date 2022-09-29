#include "main.h"

/**
 * factorial - function to print factorial.
 *@n: integer to factorize.
 *Return: -1 with an error.
 */
int factorial(int n);
{
if (n < 0)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));
}
