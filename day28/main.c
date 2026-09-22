/*
 * Day 28
 *
 * Q55: Write a program to print all the prime numbers from 1 to n.
 * Q56: Read and print elements of a one-dimensional array.
 */

#include <stdio.h>

int main() {
    // --- Q55: Prime Numbers from 1 to n ---
    int n;
    if (scanf("%d", &n) == 1) {
        int first = 1;
        for (int i = 2; i <= n; i++) {
            int isPrime = 1;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                if (!first) {
                    printf(" ");
                }
                printf("%d", i);
                first = 0;
            }
        }
        printf("\n");
    }

    // --- Q56: Read and Print 1D Array ---
    int size;
    if (scanf("%d", &size) == 1) {
        int arr[size];
        for (int i = 0; i < size; i++) {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < size; i++) {
            printf("%d%s", arr[i], (i == size - 1) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}