/*
 * Day 16
 *
 * Q31: Write a program to take a number as input and print its equivalent binary representation.
 * Q32: Write a program to check if a number is a palindrome.
 */

#include <stdio.h>

int main() {
    // --- Q31: Decimal to Binary ---
    int n;
    if (scanf("%d", &n) == 1) {
        if (n == 0) {
            printf("0\n");
        } else {
            long long binary = 0;
            long long place = 1;
            int temp = n;
            while (temp > 0) {
                int remainder = temp % 2;
                binary += remainder * place;
                place *= 10;
                temp /= 2;
            }
            printf("%lld\n", binary);
        }
    }

    // --- Q32: Palindrome Number Check ---
    int num;
    if (scanf("%d", &num) == 1) {
        int original = num;
        int reversed = 0;
        while (num > 0) {
            reversed = reversed * 10 + (num % 10);
            num /= 10;
        }

        if (original == reversed) {
            printf("Palindrome\n");
        } else {
            printf("Not palindrome\n");
        }
    }

    return 0;
}