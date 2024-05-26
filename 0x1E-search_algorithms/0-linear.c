#include <stddef.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value) {
    // Check if array is NULL or size is 0
    if (!array || size == 0) {
        return -1;
    }

    // Iterate through each element of the array
    for (size_t i = 0; i < size; ++i) {
        // If the current element matches the value, return its index
        if (array[i] == value) {
            return i;
        }
    }

    // If the loop completes without finding the value, return -1
    return -1;
}

