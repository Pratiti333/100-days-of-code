/*
 * Day 24
 *
 * Q47: Write a program to print a right-angled triangle star pattern.
 * Q48: Write a program to print a right-angled triangle number pattern (1 to i).
 */

#include <stdio.h>

int main() {
    // --- Q47: Star Triangle Pattern ---
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    // --- Q48: Increasing Digits Pattern ---
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}