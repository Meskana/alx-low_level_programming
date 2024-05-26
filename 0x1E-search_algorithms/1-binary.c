#include <stddef.h>
#include "search_algos.h"

int binary_search(int *array, size_t size, int value) {
    // Check if array is NULL or size is 0
    if (!array || size == 0) {
        return -1;
    }

    // Initialize two pointers to the start and end of the array
    size_t left = 0;
    size_t right = size - 1;

    // While there is still a portion of the array to explore
    while (left <= right) {
        // Calculate the middle index
        size_t mid = left + ((right - left) / 2);

        // If the middle element matches the value, return its index
        if (array[mid] == value) {
            return mid;
        }

        // If the value is greater than the middle element, adjust the left pointer
        else if (array[mid] < value) {
            left = mid + 1;
        }

        // Otherwise, the value is less than the middle element, so adjust the right pointer
        else {
            right = mid - 1;
        }
    }

    // If the loop exits without finding the value, return -1
    return -1;
}

