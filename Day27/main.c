/*
 * Day 27
 *
 * Q53: Write a program to print a horizontal diamond/arrow star pattern (1, 3, 5, 7, 9, 7, 5, 3, 1).
 * Q54: Write a program to print a diamond star pattern (1, 3, 5, 7, 5, 3, 1).
 */

#include <stdio.h>

int main() {
    // --- Q53: Horizontal Diamond/Arrow Pattern ---
    int rows = 5;
    // Upper half (including center row)
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // --- Q54: Diamond Layer Star Pattern ---
    int maxRows = 4;
    // Top pyramid
    for (int i = 1; i <= maxRows; i++) {
        for (int space = 1; space <= maxRows - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    // Bottom pyramid
    for (int i = maxRows - 1; i >= 1; i--) {
        for (int space = 1; space <= maxRows - i; space++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}