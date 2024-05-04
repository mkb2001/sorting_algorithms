#include "sort.h"
/**
 * 
*/
void insertion_sort_list(listint_t **list)
{
    listint_t *curr = (*list)->next;
    listint_t *key, *prev, *next;

    while (curr != NULL)
    {
        key = curr;
        prev = curr->prev;
        next = curr->next;

        while(prev!=NULL && prev->n > key->n)
        {
            prev->next = key;
            key->prev = prev;
            prev = key-prev;
            key->prev->next = key;
            key->next = prev;
        }
        if (prev != NULL)
        {
            prev->next = key;
            key->prev = prev;

        }else
        {
            (*list)->prev = *key;
            key->next = *head;
            *head = key;
        }
        curr = next;
    }


}