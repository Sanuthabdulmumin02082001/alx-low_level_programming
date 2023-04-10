#include <stdio.h>
#include "main.h"
/**
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int h;

    if (index > 64)
        return -1;

    h = n >> index;
    return (h & 1);
}
