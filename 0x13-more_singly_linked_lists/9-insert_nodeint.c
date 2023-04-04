#include "lists.h"
/**
 *
 */
listint_t insert_nodeint_at_index(listint_t **head, unsigned int inx, int n)
{
  unsigned int i;
  listint_t *new;
  listint_t *temp = *head;
  new = malloc(sizeof(listint_t));
  if (!new || !head)
    return (NULL);
  new->n = n;
  new->next = NULL;
  if (inx == 0)
  {
    new->next = *head;
    *head = new;
    return (new);
  }
  for (i = 0; temp && i < inx; i++)
  {
    if (i == inx - 1)
    {
      new->next = temp->next;
      temp->next = new;
      return (new);
    }
    else
      temp = temp->next;
  }
  return (NULL);
}
