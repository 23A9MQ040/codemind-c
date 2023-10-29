#include<stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d",&n);
    int i,j;
    for(i = n; i >= 1; i--){
        for(j = 1; j <= n - i; j++){
            printf(" ");
        } 
        for(int j = 1; j <= i; j++){
            printf("%c ",'A' + i-1);
        }
        printf("
");
    }
} 