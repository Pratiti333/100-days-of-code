/*
 * Day 9
 *
 * Q17: Write a program to find the roots of a quadratic equation and categorize them.
 * Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
 *      90-100: Grade A
 *      80-89: Grade B
 *      70-79: Grade C
 *      60-69: Grade D
 *      below 60: Grade F
 */

#include <stdio.h>
#include <math.h>

int main() {
    // --- Q17: Quadratic Equation Roots ---
    double a, b, c;
    if (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
        double d = b * b - 4 * a * c;

        if (d > 0) {
            double r1 = (-b + sqrt(d)) / (2 * a);
            double r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and different: %.0lf, %.0lf\n", r1, r2);
        } else if (d == 0) {
            double r = -b / (2 * a);
            printf("Roots are real and same: %.0lf\n", r);
        } else {
            printf("Roots are complex\n");
        }
    }

    // --- Q18: Grade Calculation ---
    int score;
    if (scanf("%d", &score) == 1) {
        if (score >= 90 && score <= 100) {
            printf("Grade A\n");
        } else if (score >= 80 && score <= 89) {
            printf("Grade B\n");
        } else if (score >= 70 && score <= 79) {
            printf("Grade C\n");
        } else if (score >= 60 && score <= 69) {
            printf("Grade D\n");
        } else {
            printf("Grade F\n");
        }
    }

    return 0;
}