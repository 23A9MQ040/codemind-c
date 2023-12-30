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
    int c[m];
    for (int j = 0; j < m; j++) {
        c[j] = 0;
        for (int i = 0; i < n; i++) {
            c[j] += matrix[i][j];
        }
    }

    for (int j = 0; j < m; j++) {
        printf("%d ", c[j]);
    }
    
}
