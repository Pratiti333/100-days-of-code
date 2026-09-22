/*
 * Day 21
 *
 * Q41: Write a program to swap the first and last digit of a number.
 * Q42: Write a program to check if a number is a perfect number.
 */

#include <stdio.h>
#include <math.h>

int main() {
    // --- Q41: Swap First and Last Digit ---
    int num;
    if (scanf("%d", &num) == 1) {
        if (num < 10) {
            printf("%d\n", num);
        } else {
            int lastDigit = num % 10;
            int temp = num;
            int digits = 0;

            while (temp > 0) {
                digits++;
                temp /= 10;
            }

            int pow10 = 1;
            for (int i = 1; i < digits; i++) {
                pow10 *= 10;
            }

            int firstDigit = num / pow10;
            int middle = (num % pow10) / 10;

            int swapped = (lastDigit * pow10) + (middle * 10) + firstDigit;
            printf("%d\n", swapped);
        }
    }

    // --- Q42: Perfect Number Check ---
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int i = 1; i <= n / 2; i++) {
            if (n % i == 0) {
                sum += i;
            }
        }

        if (sum == n && n > 0) {
            printf("Perfect number\n");
        } else {
            printf("Not perfect number\n");
        }
    }

    return 0;
}