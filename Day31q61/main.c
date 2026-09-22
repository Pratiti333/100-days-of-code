/*
 * Day 31
 * Q61: Search for an element in an array using linear search.
 * Q62: Reverse an array without taking extra space.
 */

#include <stdio.h>

void q61() {
    int n, target;
    if (scanf("%d", &n) != 1) return;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &target);

    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Found at index %d\n", index);
    } else {
        printf("-1\n");
    }
}

void q62() {
    int n;
    if (scanf("%d", &n) != 1) return;
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");
}

int main() {
    q61();
    q62();
    return 0;
}