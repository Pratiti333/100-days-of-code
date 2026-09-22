/*
 * Day 22
 *
 * Q43: Write a program to check if a number is a strong number.
 * Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.
 */

#include <stdio.h>

int main() {
    // --- Q43: Strong Number Check ---
    int num;
    if (scanf("%d", &num) == 1) {
        int original = num;
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            int fact = 1;
            for (int i = 1; i <= digit; i++) {
                fact *= i;
            }
            sum += fact;
            temp /= 10;
        }

        if (sum == original && original > 0) {
            printf("Strong number\n");
        } else {
            printf("Not strong number\n");
        }
    }

    // --- Q44: Series Sum 1 + 3/4 + 5/6 + ... ---
    int n;
    if (scanf("%d", &n) == 1) {
        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                sum += 1.0;
            } else {
                double num = 2 * i - 1;
                double den = 2 * i - 2;
                sum += (num / den);
            }
        }
        printf("Approximate sum: %.1f\n", sum);
    }

    return 0;
}