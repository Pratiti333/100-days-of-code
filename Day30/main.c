/*
 * Day 30
 *
 * Q59: Count even and odd numbers in an array.
 * Q60: Count positive, negative, and zero elements in an array.
 */

#include <stdio.h>

int main() {
    // --- Q59: Count Even and Odd Numbers ---
    int size;
    if (scanf("%d", &size) == 1) {
        int arr[size];
        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }

        printf("Even=%d, Odd=%d\n", evenCount, oddCount);
    }

    // --- Q60: Count Positive, Negative, and Zeros ---
    if (scanf("%d", &size) == 1) {
        int arr[size];
        int posCount = 0;
        int negCount = 0;
        int zeroCount = 0;

        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
            if (arr[i] > 0) {
                posCount++;
            } else if (arr[i] < 0) {
                negCount++;
            } else {
                zeroCount++;
            }
        }

        printf("Positive=%d, Negative=%d, Zero=%d\n", posCount, negCount, zeroCount);
    }

    return 0;
}