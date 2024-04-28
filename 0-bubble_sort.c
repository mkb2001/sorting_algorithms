#include "sort.h"
/**
 * bubble_sort - Implementation of bubble sort
 * @array: the array to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i;
    size_t j;
    for (i = 0; i < size - 1; i++) {
        {
            for (j = 0; j < size - i - 1; j++) {
                {
                    if (array[j] < array[j + 1]) {
                        swap(&array[j], &array[j + 1]);
                        print_array(array, size);
                    }
                }
            }
        }
    }
}
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
