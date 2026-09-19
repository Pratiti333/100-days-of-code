/*
 * Day 5
 * 
 * Q9: Calculate simple and compound interest.
 * Q10: Convert time in seconds to hours:minutes:seconds format.
 */

#include <stdio.h>
#include <math.h>

int main() {
    // --- Q9: Simple & Compound Interest ---
    float principal, rate, time;
    if (scanf("%f %f %f", &principal, &rate, &time) == 3) {
        float simple_interest = (principal * rate * time) / 100.0;
        float compound_interest = principal * (pow((1.0 + rate / 100.0), time)) - principal;
        
        // %g formats floats without trailing zeros (e.g. 100 instead of 100.00)
        printf("Simple Interest=%g, Compound Interest=%g\n", simple_interest, compound_interest);
    }

    // --- Q10: Time Conversion (hours:minutes:seconds) ---
    int total_seconds;
    if (scanf("%d", &total_seconds) == 1) {
        int hours = total_seconds / 3600;
        int minutes = (total_seconds % 3600) / 60;
        int seconds = total_seconds % 60;
        
        printf("%d:%d:%d\n", hours, minutes, seconds);
    }

    return 0;
}
