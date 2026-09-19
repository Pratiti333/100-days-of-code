/*
 * Q2 (User Inputs, Operations & Output)
 * Write a program to input two numbers and display their sum, difference, product, and quotient.
 * 
 * Input 1: 10 2
 * Output 1: Sum=12, Diff=8, Product=20, Quotient=5
 * 
 * Input 2: 7 3
 * Output 2: Sum=10, Diff=4, Product=21, Quotient=2
 */

#include <stdio.h>

int main() {
    int num1, num2;
    
    scanf("%d %d", &num1, &num2);
    
    if (num2 == 0) {
        printf("Division by zero is not allowed.\n");
    } else {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d\n", 
               num1 + num2, 
               num1 - num2, 
               num1 * num2, 
               num1 / num2);
    }
    
    return 0;
}