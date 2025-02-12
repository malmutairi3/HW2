#include <stdio.h>
#include "statistics.h"
#include "output_array.h"

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {10, 20, 30, 40, 50};
    int arr3[] = {3, 7, 12, 19, 21};
    int size1 = 5, size2 = 5, size3 = 5;

    printf("Array 1 - Sum: %d, Average: %.2f, Std Dev: %.2f, Max: %d, Min: %d, Abs Diff: %d\n", 
           sum(arr1, size1), average(arr1, size1), standard_deviation(arr1, size1), 
           find_max(arr1, size1), find_min(arr1, size1), abs_difference(arr1, size1));
    output_array(arr1, size1);

    printf("Array 2 - Sum: %d, Average: %.2f, Std Dev: %.2f, Max: %d, Min: %d, Abs Diff: %d\n", 
           sum(arr2, size2), average(arr2, size2), standard_deviation(arr2, size2), 
           find_max(arr2, size2), find_min(arr2, size2), abs_difference(arr2, size2));
    output_array(arr2, size2);

    printf("Array 3 - Sum: %d, Average: %.2f, Std Dev: %.2f, Max: %d, Min: %d, Abs Diff: %d\n", 
           sum(arr3, size3), average(arr3, size3), standard_deviation(arr3, size3), 
           find_max(arr3, size3), find_min(arr3, size3), abs_difference(arr3, size3));
    output_array(arr3, size3);

    return 0;
}


