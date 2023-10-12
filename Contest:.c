#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int t=a+(2*b);
    if(t>=x)
    printf("Qualify");
    else
    printf("Not Qualify");
}