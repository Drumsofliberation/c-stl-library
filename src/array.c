#include "array.h"
#include <stdlib.h>

/*
Linear Search Implementation with O(n) time complexity
*/
int array_find_impl(const int *arr, size_t n, int value) {
    for (size_t i = 0; i < n; i++) {
        if (arr[i] == value) return (int)i;
    }
    return -1;
}
