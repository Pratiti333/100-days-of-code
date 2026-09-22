#include <stdio.h>
#include <stdbool.h>

int main() {
    int r, c;
    if (scanf("%d %d", &r, &c) != 2) return 0;

    int matrix[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (r != c) {
        printf("False\n");
        return 0;
    }

    bool symmetric = true;
    for (int i = 0; i < r; i++) {
        for (int j = i + 1; j < c; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    printf("%s\n", symmetric ? "True" : "False");
    return 0;
}