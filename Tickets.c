#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int d = 4*x;
    if(d <= 1000)
    printf("YES");
    else
    printf("NO");
}