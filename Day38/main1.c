#include <stdio.h>

int main() {
    int r1, c1, r2, c2;
    if (scanf("%d %d", &r1, &c1) != 2) return 0;

    int A[r1][c1];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) scanf("%d", &A[i][j]);
    }

    if (scanf("%d %d", &r2, &c2) != 2) return 0;

    int B[r2][c2];
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) scanf("%d", &B[i][j]);
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d%s", A[i][j] + B[i][j], (j == c1 - 1) ? "" : " ");
        }
        printf("\n");
    }

    return 0;
}