/*
 * Day 11
 *
 * Q21: Write a program to display the month name and number of days using switch-case for a given month number.
 * Q22: Write a program to find profit or loss percentage given cost price and selling price.
 */

#include <stdio.h>

int main() {
    // --- Q21: Month Name and Number of Days (Switch-Case) ---
    int month;
    if (scanf("%d", &month) == 1) {
        switch (month) {
            case 1:  printf("January, 31 days\n"); break;
            case 2:  printf("February, 28 days\n"); break;
            case 3:  printf("March, 31 days\n"); break;
            case 4:  printf("April, 30 days\n"); break;
            case 5:  printf("May, 31 days\n"); break;
            case 6:  printf("June, 30 days\n"); break;
            case 7:  printf("July, 31 days\n"); break;
            case 8:  printf("August, 31 days\n"); break;
            case 9:  printf("September, 30 days\n"); break;
            case 10: printf("October, 31 days\n"); break;
            case 11: printf("November, 30 days\n"); break;
            case 12: printf("December, 31 days\n"); break;
            default: printf("Invalid month number\n"); break;
        }
    }

    // --- Q22: Profit or Loss Percentage ---
    float cost_price, selling_price;
    if (scanf("%f %f", &cost_price, &selling_price) == 2) {
        if (selling_price > cost_price) {
            float profit = selling_price - cost_price;
            float profit_percentage = (profit / cost_price) * 100;
            printf("Profit %.0f%%\n", profit_percentage);
        } else if (cost_price > selling_price) {
            float loss = cost_price - selling_price;
            float loss_percentage = (loss / cost_price) * 100;
            printf("Loss %.0f%%\n", loss_percentage);
        } else {
            printf("No Profit No Loss\n");
        }
    }

    return 0;
}