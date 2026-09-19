/*
 * Day 2
 * 
 * Q3: Calculate area and perimeter of a rectangle given length and breadth.
 * Q4: Calculate area and circumference of a circle given its radius.
 */

#include <stdio.h>

int main() {
    // --- Q3: Rectangle Area & Perimeter ---
    float length, breadth;
    if (scanf("%f %f", &length, &breadth) == 2) {
        float rect_area = length * breadth;
        float rect_perimeter = 2 * (length + breadth);
        printf("Area=%.0f, Perimeter=%.0f\n", rect_area, rect_perimeter);
    }

    // --- Q4: Circle Area & Circumference ---
    float radius;
    float pi = 3.14;
    if (scanf("%f", &radius) == 1) {
        float circle_area = pi * radius * radius;
        float circumference = 2 * pi * radius;
        printf("Area=%.2f, Circumference=%.2f\n", circle_area, circumference);
    }

    return 0;
}