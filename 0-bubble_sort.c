#include "sort.h"
/**
 * bubble_sort - Implementation of bubble sort
 * @array: the array to sort
 * @size: the size of the array
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, len = size;
    bool bubbly = false;

    if (array == NULL || size < 2)
        return;

    while (bubbly == false)
    {
        bubbly = true;
        for (i = 0; i < len - 1; i++)
        {
            if (array[i] > array[i + 1])
            {
                swap(array + i, array + i + 1);
                print_array(array, size);
                bubbly = false;
            }
        }
        len--;
}}

/**
 * swap - Swapps the values of two numbers
 * @a: First Number
 * @b: Second Number
 */
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
