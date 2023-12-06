#include <stdio.h>

int main() {
    int n,A,B;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d %d", &A, &B);
    int s = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <A || arr[i] > B) {
            s += arr[i];
        }
    }
    printf("%d",s);
    return 0;
}
