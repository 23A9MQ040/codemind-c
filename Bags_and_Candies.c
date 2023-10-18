#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d = 0;
    while(a>0)
    {
        a -= b*c;
        d++;
    }
    printf("%d",d);
}