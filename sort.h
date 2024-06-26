#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>
/**
* struct listint_s - Doubly linked list node
*
* @n: Integer stored in the node
* @prev: Pointer to the previous element of the list
* @next: Pointer to the next element of the list
*/
typedef struct listint_s
{
	const int n;

	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
/**
 * enum bool - A boolean type
 * @false: 0
 * @true: 1
*/
typedef enum bool
{
	false = 0,
	true
} bool;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

void bubble_sort(int *array, size_t size);

void insertion_sort_list(listint_t **list);
void swap(int *a, int *b);

#endif
