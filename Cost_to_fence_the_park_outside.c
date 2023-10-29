#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int A = a+(2*c);
    int B =  b+(2*c);
    int C =(A*B)-(a*b);
    if(c>0&&A>0&&B>0&&C>0)
    printf("%d",C*d);
    else
    printf("Impossible");
}