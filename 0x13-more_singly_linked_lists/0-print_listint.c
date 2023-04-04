#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 *print_listint-prints all the elements in a linked list
 *@h:list of type listint_int to print
 *Return-returns nodes
 */
size_t print_listint(const listint_t *h)
{
  size_t num = 0;

  while (h)
    {
      printf("%d\n", h->n);
      num++;
      h = h->next;
    }

  return (num);
}
