/*
 * Day 15
 *
 * Q29: Write a program to calculate the factorial of a number.
 * Q30: Write a program to reverse a given number.
 */

#include <stdio.h>

int main() {
    // --- Q29: Factorial of a Number ---
    int num;
    if (scanf("%d", &num) == 1) {
        long long factorial = 1;
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }

    // --- Q30: Reverse a Number ---
    int n;
    if (scanf("%d", &n) == 1) {
        int reversed = 0;
        while (n != 0) {
            reversed = reversed * 10 + (n % 10);
            n /= 10;
        }
        printf("%d\n", reversed);
    }

    return 0;
}