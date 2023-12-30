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
    int sumEven = 0, sumOdd = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] % 2 == 0) {
                sumEven += matrix[i][j];
            } else {
                sumOdd += matrix[i][j];
            }
        }
    }
    printf("%d ", sumEven);
    printf("%d", sumOdd);

    return 0;
}
