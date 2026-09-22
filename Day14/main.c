/*
 * Day 14
 *
 * Q27: Write a program to print the sum of the first n odd numbers.
 * Q28: Write a program to print the product of even numbers from 1 to n.
 */

#include <stdio.h>

int main() {
    // --- Q27: Sum of First n Odd Numbers ---
    int n;
    if (scanf("%d", &n) == 1) {
        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += (2 * i - 1);
        }
        printf("%d\n", sum);
    }

    // --- Q28: Product of Even Numbers 1 to n ---
    int limit;
    if (scanf("%d", &limit) == 1) {
        long long product = 1;
        int count = 0;

        for (int i = 2; i <= limit; i += 2) {
            product *= i;
            count++;
        }

        if (count == 0) {
            printf("0\n");
        } else {
            printf("%lld (", product);
            for (int i = 2; i <= limit; i += 2) {
                printf("%d", i);
                if (i + 2 <= limit) {
                    printf(" * ");
                }
            }
            printf(")\n");
        }
    }

    return 0;
}