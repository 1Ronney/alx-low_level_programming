#include "main.h"
#include <stdlib.h>
/**
 * *malloc_checked - function to allocate mem.
 * @b: bytes to be allocated
 *
 * Return : pointer to the allocated memory.
 *if malloc fails status value is 98.
 */
void *malloc_checked(unsigned int b);
{
char *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
