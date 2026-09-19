/*
 * Day 5
 * 
 * Q9: Calculate simple and compound interest for given principal, rate, and time.
 * Q10: Convert total seconds into hours, minutes, and remaining seconds.
 */

#include <stdio.h>
#include <math.h>

int main() {
    // --- Q9: Simple & Compound Interest ---
    float principal, rate, time;
    if (scanf("%f %f %f", &principal, &rate, &time) == 3) {
        float simple_interest = (principal * rate * time) / 100.0;
        float compound_interest = principal * (pow((1.0 + rate / 100.0), time)) - principal;
        printf("Simple Interest = %.2f\n", simple_interest);
        printf("Compound Interest = %.2f\n", compound_interest);
    }

    // --- Q10: Time Conversion (Seconds to H:M:S) ---
    int total_seconds;
    if (scanf("%d", &total_seconds) == 1) {
        int hours = total_seconds / 3600;
        int minutes = (total_seconds % 3600) / 60;
        int seconds = total_seconds % 60;
        printf("%d Hours, %d Minutes, %d Seconds\n", hours, minutes, seconds);
    }

    return 0;
}