#include<stdio.h>
int main()
{
    int a,b,s=0;
    scanf("%d",&a);
    int i;
    int c = a*a;
    for( i = 1; i <= c; i++)
    {
        b = c%10;
        s +=b;
        c = c/10;
    }
    if(s==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}