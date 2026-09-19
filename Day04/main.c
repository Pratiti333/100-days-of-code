/*
 * Day 4
 * 
 * Q7: Swap two numbers without using a third variable.
 * Q8: Find and display the sum of the first n natural numbers.
 */

#include <stdio.h>

int main() {
    // --- Q7: Swap Two Numbers Without Third Variable ---
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        a = a + b;
        b = a - b;
        a = a - b;
        printf("After swap: %d %d\n", a, b);
    }

    // --- Q8: Sum of First n Natural Numbers ---
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = n * (n + 1) / 2;
        printf("Sum=%d\n", sum);
    }

    return 0;
}