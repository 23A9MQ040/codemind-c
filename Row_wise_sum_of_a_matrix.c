#include <stdio.h>

int main() {
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    int matrix[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int r[n];
    for (int i = 0; i < n; i++) {
        r[i] = 0;
        for (int j = 0; j < m; j++) {
            r[i] += matrix[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", r[i]);
    }
    return 0;
}
