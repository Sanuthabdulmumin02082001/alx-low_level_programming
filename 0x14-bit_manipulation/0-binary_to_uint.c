#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit:Converts binary to decimal
 * @b: char parameter
 * return: returns the converted decimal or 0
 */
unsigned int binary_to_uint(const char *b)
{
    int len;
    unsigned int result, p;
    if (b == NULL)
        return (0);

    for (len = 0; b[len]; len++)
    {
        if (b[len] != '1' && b[len] != '0')
            return (0);
    }

    for (p = 1, result = 0, len--; len >= 0; len--)
    {
        if (b[len] == '1')
            result += p;

        p *= 2;
    }

    return (result);
}
