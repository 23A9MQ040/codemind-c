#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int m = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] %2== 0) {
            m += arr[i];
        }
    }
    printf("%d
", m);
    return 0;
}
