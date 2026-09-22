#include <stdio.h>

int main() {
    int n, pos;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &pos);

    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n - 1; i++) {
        printf("%d%s", arr[i], (i == n - 2) ? "" : " ");
    }
    printf("\n");

    return 0;
}