#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int l = 0;
    while(a > 0)
    {
        int d = a%10;
        if(d>l){
            l = d;
        }
        a /= 10;
    }
    printf("%d",l);
}