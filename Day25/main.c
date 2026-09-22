/*
 * Day 25
 *
 * Q49: Write a program to print pattern with digits ending at 5.
 * Q50: Write a program to print inverted right-angled star triangle pattern.
 */

#include <stdio.h>

int main() {
    // --- Q49: Numbers (5 - i) to 5 Pattern ---
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // --- Q50: Inverted Star Triangle Pattern ---
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}