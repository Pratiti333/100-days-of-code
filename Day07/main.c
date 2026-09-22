/*
 * Day 7
 *
 * Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
 * Q14: Write a program to input a character and check whether it is a vowel or consonant using if-else.
 */

#include <stdio.h>
#include <ctype.h>

int main() {
    // --- Q13: Leap Year Check ---
    int year;
    if (scanf("%d", &year) == 1) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
            printf("Leap year\n");
        } else {
            printf("Not a leap year\n");
        }
    }

    // --- Q14: Vowel or Consonant Check ---
    char ch;
    if (scanf(" %c", &ch) == 1) {
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }

    return 0;
}