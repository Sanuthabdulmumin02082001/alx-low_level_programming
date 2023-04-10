#include <stdio.h>
#include "main.h"
/**
 *
 */
 int clear_bit(unsigned long int *n, unsigned int index)
 {
     unsigned long int h;
     unsigned int hold;

     if (index > 64)
        return -1;
     hold = index;
     for (h = 1; hold > 0; h *= 2, hold--)
        ;
     if ((*n >> index) & 1)
        *n -= 1;

     return (1);

 }
