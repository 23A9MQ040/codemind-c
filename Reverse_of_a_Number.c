#include<stdio.h>
int main()
{
    int a,r=0;
    scanf("%d",&a);
    while(a != 0)
    {
        int b = a%10;
        r = r*10+b;
        a = a/10;
    }
    printf("%d",r);
}