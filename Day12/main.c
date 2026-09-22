/*
 * Day 12
 *
 * Q23: Write a program to calculate library fine based on late days as follows:
 *      First 5 days late: ₹2/day
 *      Next 5 days late: ₹4/day
 *      Next 20 days late: ₹6/day
 *      More than 30 days: Membership Cancelled.
 * Q24: Write a program to calculate electricity bill based on units consumed with these rates:
 *      First 100 units at ₹5/unit
 *      Next 100 units at ₹7/unit
 *      Next 100 units at ₹10/unit
 *      Above at ₹12/unit
 */

#include <stdio.h>

int main() {
    // --- Q23: Library Fine Calculation ---
    int days;
    if (scanf("%d", &days) == 1) {
        if (days <= 0) {
            printf("Fine 0\n");
        } else if (days <= 5) {
            printf("Fine %d\n", days * 2);
        } else if (days <= 10) {
            printf("Fine %d\n", 5 * 2 + (days - 5) * 4);
        } else if (days <= 30) {
            printf("Fine %d\n", 5 * 2 + 5 * 4 + (days - 10) * 6);
        } else {
            printf("Membership Cancelled\n");
        }
    }

    // --- Q24: Electricity Bill Calculation ---
    int units;
    if (scanf("%d", &units) == 1) {
        int bill = 0;
        if (units <= 100) {
            bill = units * 5;
        } else if (units <= 200) {
            bill = (100 * 5) + (units - 100) * 7;
        } else if (units <= 300) {
            bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
        } else {
            bill = (100 * 5) + (100 * 7) + (100 * 10) + (units - 300) * 12;
        }
        printf("Bill %d\n", bill);
    }

    return 0;
}