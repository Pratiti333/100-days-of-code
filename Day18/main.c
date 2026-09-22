/*
 * Day 18
 *
 * Q35: Write a program to print all factors of a given number.
 * Q36: Write a program to find the HCF (GCD) of two numbers.
 */

#include <stdio.h>

int main() {
    // --- Q35: Factors of a Number ---
    int num;
    if (scanf("%d", &num) == 1) {
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                printf("%d%s", i, (i == num) ? "" : " ");
            }
        }
        printf("\n");
    }

    // --- Q36: HCF (GCD) of Two Numbers ---
    int a, b;
    if (scanf("%d %d", &a, &b) == 2) {
        int hcf = 1;
        int min = (a < b) ? a : b;

        for (int i = 1; i <= min; i++) {
            if (a % i == 0 && b % i == 0) {
                hcf = i;
            }
        }
        printf("%d\n", hcf);
    }

    return 0;
}