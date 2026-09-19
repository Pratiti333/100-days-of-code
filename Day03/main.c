/*
 * Day 3
 * 
 * Q5: Convert temperature from Celsius to Fahrenheit.
 * Q6: Swap two numbers using a third variable.
 */

#include <stdio.h>

int main() {
    // --- Q5: Celsius to Fahrenheit ---
    float celsius;
    if (scanf("%f", &celsius) == 1) {
        float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("Fahrenheit=%.0f\n", fahrenheit);
    }

    // --- Q6: Swap Two Numbers Using a Third Variable ---
    int a, b, temp;
    if (scanf("%d %d", &a, &b) == 2) {
        temp = a;
        a = b;
        b = temp;
        printf("After swap: %d %d\n", a, b);
    }

    return 0;
}