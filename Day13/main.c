/*
 * Day 13
 *
 * Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 * Q26: Write a program to print numbers from 1 to n.
 */

#include <stdio.h>

int main() {
    // --- Q25: Basic Calculator ---
    int num1, num2;
    char op;
    if (scanf("%d %d %c", &num1, &num2, &op) == 3) {
        switch (op) {
            case '+':
                printf("%d\n", num1 + num2);
                break;
            case '-':
                printf("%d\n", num1 - num2);
                break;
            case '*':
                printf("%d\n", num1 * num2);
                break;
            case '/':
                if (num2 != 0) printf("%d\n", num1 / num2);
                else printf("Error: Division by zero\n");
                break;
            case '%':
                if (num2 != 0) printf("%d\n", num1 % num2);
                else printf("Error: Division by zero\n");
                break;
            default:
                printf("Invalid operator\n");
                break;
        }
    }

    // --- Q26: Print Numbers 1 to n ---
    int n;
    if (scanf("%d", &n) == 1) {
        for (int i = 1; i <= n; i++) {
            printf("%d%c", i, (i == n) ? '\n' : ' ');
        }
    }

    return 0;
}