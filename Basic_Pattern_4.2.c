#include<stdio.h>
int main()
{
    int a;
    int n;
    scanf("%d",&n);
    int i,j;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= n; j++){
            if((i%2)==0)
            printf("0 ");
            else
            printf("1 ");
        }
        printf("
");
    }
}