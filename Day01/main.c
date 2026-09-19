/*Q1 (User Inputs, Operations & Output)
📋
Write a program to input two numbers and display their sum.
Show Sample Test Cases
Input 1:
3 4
Output 1:
Sum = 7
Input 2:
-1 20
Output 2:
Sum = 19
*/

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Read two integers from input
    scanf("%d %d", &num1, &num2);

    // Calculate sum
    sum = num1 + num2;

    // Display formatted output
    printf("Sum = %d\n", sum);

    return 0;
}