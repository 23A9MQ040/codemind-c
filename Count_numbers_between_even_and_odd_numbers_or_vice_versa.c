#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int c = 0;
    for (int j = 1; j < n - 1; j++) {
        if ((arr[j - 1] % 2 == 0 && arr[j + 1] % 2 != 0) ||
        (arr[j - 1] % 2 != 0 && arr[j + 1] % 2 == 0)) {
            c++;
        }
    }
    printf("%d
", c);
    return 0;
}
