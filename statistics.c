#include "statistics.h"
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int sum(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

double average(int arr[], int size) {
    return (double)sum(arr, size) / size;
}

double standard_deviation(int arr[], int size) {
    double avg = average(arr, size);
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += (arr[i] - avg) * (arr[i] - avg);
    }
    return sqrt(sum / size);
}

int find_max(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int find_min(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int abs_difference(int arr[], int size) {
    return abs(find_max(arr, size) - find_min(arr, size));
}