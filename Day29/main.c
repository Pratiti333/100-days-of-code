/*
 * Day 29
 *
 * Q57: Find the sum of array elements.
 * Q58: Find the maximum and minimum element in an array.
 */

#include <stdio.h>

int main() {
    // --- Q57: Sum of Array Elements ---
    int size;
    if (scanf("%d", &size) == 1) {
        int arr[size];
        int sum = 0;
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        printf("%d\n", sum);
    }

    // --- Q58: Max and Min Element ---
    if (scanf("%d", &size) == 1) {
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        int max = arr[0];
        int min = arr[0];

        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
            if (arr[i] < min) {
                min = arr[i];
            }
        }

        printf("Max=%d, Min=%d\n", max, min);
    }

    return 0;
}