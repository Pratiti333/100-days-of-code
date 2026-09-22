/*
 * Day 26
 *
 * Q51: Repeat pattern of Q49 (5, 45, 345, ...).
 * Q52: Custom spaced star pattern.
 */

#include <stdio.h>

int main() {
    // --- Q51: Pattern 5 to 12345 ---
    for (int i = 5; i >= 1; i--) {
        for (int j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n");

    // --- Q52: Vertically Spaced Stars Pattern ---
    int gaps[] = {1, 2, 3, 4}; // Spacing sequence
    for (int i = 0; i < 5; i++) {
        printf("*\n");
        if (i < 4) {
            for (int k = 0; k < gaps[i]; k++) {
                printf("\n");
            }
        }
    }

    return 0;
}