#include "output_array.h"
#include <stdio.h>

void output_array(int arr[], int size) {
    printf("Array: [");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}