/*
 * Day 19
 *
 * Q37: Write a program to find the LCM of two numbers.
 * Q38: Write a program to find the sum of digits of a number.
 */

#include <stdio.h>

int main() {
    // --- Q37: LCM of Two Numbers ---
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int max = (a > b) ? a : b;
        while (1) {
            if (max % a == 0 && max % b == 0) {
                printf("%d\n", max);
                break;
            }
            max++;
        }
    }

    // --- Q38: Sum of Digits of a Number ---
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        int temp = n;
        while (temp > 0) {
            sum += (temp % 10);
            temp /= 10;
        }
        printf("%d\n", sum);
    }

    return 0;
}