#include<stdio.h>
int main()
{
    int a = 1,b = 10;
    scanf("%d",&a,&b);
    for(int i = a; i <= b; i++)
    {
        printf("%d ",i);
    }
}