#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i = a; i<=b; i++)
    {
        int c = i;
        int r = 0;
        while(c > 0)
        {
            r = r*10+c%10;
            c/=10;
        }
        if(r==i)
        printf("%d ",i);
    }
}