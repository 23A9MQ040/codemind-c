#include<stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d",&n);
    int i,j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n-i+1; j++){
            printf("%d ",i);
        }
        printf("
");
    }
}