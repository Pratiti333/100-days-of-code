/*
 * Day 1
 * 
 * Q1: Input two numbers and display their sum.
 * Q2: Input two numbers and display sum, difference, product, and quotient.
 */

#include <stdio.h>

int main() {
    int num1, num2;

    // --- Q1: Sum of Two Numbers ---
    if (scanf("%d %d", &num1, &num2) == 2) {
        printf("Sum = %d\n", num1 + num2);
    }

    // --- Q2: Sum, Diff, Product, Quotient ---
    if (scanf("%d %d", &num1, &num2) == 2) {
        if (num2 == 0) {
            printf("Division by zero should be handled carefully.\n");
        } else {
            printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
                   num1 + num2, 
                   num1 - num2, 
                   num1 * num2, 
                   num1 / num2);
        }
    }

    return 0;
}