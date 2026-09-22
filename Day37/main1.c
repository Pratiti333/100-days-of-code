#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    int rowSums[r];
    for (int i = 0; i < r; i++) {
        rowSums[i] = 0;
        for (int j = 0; j < c; j++) {
            int val;
            scanf("%d", &val);
            rowSums[i] += val;
        }
    }

    for (int i = 0; i < r; i++) {
        printf("%d%s", rowSums[i], (i == r - 1) ? "" : " ");
    }
    printf("\n");

    return 0;
}