/*
 * Day 23
 *
 * Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
 * Q46: Write a program to print a 5x5 square pattern of stars.
 */

#include <stdio.h>

int main() {
    // --- Q45: Series Sum 2/3 + 4/7 + 6/11 + ... ---
    int n;
    if (scanf("%d", &n) == 1) {
        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            double num = 2 * i;
            double den = 4 * i - 1;
            sum += (num / den);
        }
        printf("Approximate sum: %.2f\n", sum);
    }

    // --- Q46: 5x5 Square Pattern ---
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}