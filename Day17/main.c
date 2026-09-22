/*
 * Day 17
 *
 * Q33: Write a program to check if a number is an Armstrong number.
 * Q34: Write a program to check if a number is prime.
 */

#include <stdio.h>
#include <math.h>

int main() {
    // --- Q33: Armstrong Number Check ---
    int num;
    if (scanf("%d", &num) == 1) {
        int original = num;
        int count = 0;
        int temp = num;

        // Count digits
        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = num;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            
            // Calculate digit^count without pow to preserve integer precision
            int p = 1;
            for (int i = 0; i < count; i++) {
                p *= digit;
            }
            sum += p;
            temp /= 10;
        }

        if (sum == original) {
            printf("Armstrong\n");
        } else {
            printf("Not Armstrong\n");
        }
    }

    // --- Q34: Prime Number Check ---
    int n;
    if (scanf("%d", &n) == 1) {
        int isPrime = 1;

        if (n <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i * i <= n; i++) {
                if (n % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("Prime\n");
        } else {
            printf("Not prime\n");
        }
    }

    return 0;
}