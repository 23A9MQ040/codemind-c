#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int s= 0, c = 0;
    for (int j = 0; j < n; j++) {
        if (j % 2 == 0) {
            s += arr[j];
        } else {
            c += arr[j];
        }
    }
    int b = abs(s - c);
    printf("%d
", b);
    

    return 0;
}
