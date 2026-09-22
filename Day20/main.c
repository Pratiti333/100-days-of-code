/*
 * Day 20
 *
 * Q39: Write a program to find the product of odd digits of a number.
 * Q40: Write a program to find the 1's complement of a binary number and print it.
 */

#include <stdio.h>

int main() {
    // --- Q39: Product of Odd Digits ---
    int num;
    if (scanf("%d", &num) == 1) {
        int product = 1;
        int hasOdd = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 != 0) {
                product *= digit;
                hasOdd = 1;
            }
            temp /= 10;
        }

        if (hasOdd) {
            printf("%d\n", product);
        } else {
            printf("1 (no odd digits, assume 1)\n");
        }
    }

    // --- Q40: 1's Complement of a Binary Number ---
    long long binary;
    if (scanf("%lld", &binary) == 1) {
        long long complement = 0;
        long long place = 1;

        if (binary == 0) {
            printf("1\n");
        } else {
            long long temp = binary;
            while (temp > 0) {
                int digit = temp % 10;
                int comp_digit = (digit == 0) ? 1 : 0;
                complement += comp_digit * place;
                place *= 10;
                temp /= 10;
            }

            // Count original length to handle leading zeros (e.g., 1111 -> 0000)
            int len = 0;
            temp = binary;
            while (temp > 0) {
                len++;
                temp /= 10;
            }

            printf("%0*lld\n", len, complement);
        }
    }

    return 0;
}