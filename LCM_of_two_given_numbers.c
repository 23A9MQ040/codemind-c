#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a<1||a>103||b<1||b>103)
    printf("0");
    else
    {
        int m=(a>b)?a:b;
        while(1)
        {
            if((m%a==0) && (m%b==0))
            {
             printf("%d",m);
             break;
            }
            ++m;
        }
    }
}