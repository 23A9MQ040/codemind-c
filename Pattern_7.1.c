#include<stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d",&n);
    int i,j;
    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++){
            printf(" ");
        } 
        for(int j = i; j <= n; j++){
            printf("* ");
        }
        printf("
");
    }
} 