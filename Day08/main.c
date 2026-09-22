/*
 * Day 8
 *
 * Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
 * Q16: Write a program to input three numbers and find the largest among them using if-else.
 */

#include <stdio.h>

int main() {
    // --- Q15: Character Type Check ---
    char ch;
    if (scanf(" %c", &ch) == 1) {
        if (ch >= 'A' && ch <= 'Z') {
            printf("Uppercase alphabet\n");
        } else if (ch >= 'a' && ch <= 'z') {
            printf("Lowercase alphabet\n");
        } else if (ch >= '0' && ch <= '9') {
            printf("Digit\n");
        } else {
            printf("Special character\n");
        }
    }

    // --- Q16: Largest of Three Numbers ---
    int a, b, c;
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        if (a >= b && a >= c) {
            printf("Largest is %d\n", a);
        } else if (b >= a && b >= c) {
            printf("Largest is %d\n", b);
        } else {
            printf("Largest is %d\n", c);
        }
    }

    return 0;
}