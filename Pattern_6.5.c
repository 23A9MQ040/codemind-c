#include<stdio.h>
int main()
{
    int a;
    int n;
    char ch = 'A';
    scanf("%d",&n);
    int i,j;
    for(i = 1; i <= n; i++){
        for(j = 1; j < i; j++){
            printf(" ");
        } 
        for(int j = 1; j <=n - i+ 1; j++){
            printf("%c ",ch);
        }
        ch++;
        printf("
");
    }
} 