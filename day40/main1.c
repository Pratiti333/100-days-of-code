#include <stdio.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    int matrix[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int totalDiagonals = r + c - 1;
    int first = 1;

    for (int d = 0; d < totalDiagonals; d++) {
        for (int i = 0; i < r; i++) {
            int j = d - i;
            if (j >= 0 && j < c) {
                if (!first) printf(" ");
                printf("%d", matrix[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");

    return 0;
}