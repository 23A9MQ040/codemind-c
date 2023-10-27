#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a >= b && b <= (a - b + 1) && a >= (b *(b + 1))/2)
    printf("YES");
    else
    printf("NO");
    
}