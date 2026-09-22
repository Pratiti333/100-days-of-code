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

    int diagSize = (r < c) ? r : c;
    bool distinct = true;

    for (int i = 0; i < diagSize; i++) {
        for (int j = i + 1; j < diagSize; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                distinct = false;
                break;
            }
        }
        if (!distinct) break;
    }

    printf("%s\n", distinct ? "True" : "False");
    return 0;
}