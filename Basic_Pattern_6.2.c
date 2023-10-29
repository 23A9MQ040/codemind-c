#include<stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d",&n);
    int i,j,k;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(k = i; k >= 1; k--){
            printf("%d ",j);
        }
        printf("
");
    }
} 