#include<stdio.h>
int main()
{
    int a;
    int i=1;
    float b=0;
    scanf("%d",&a);
    while(i<=a)
    {
        b += 1.0/i;
        i++;
    }
    printf("%.2f",b);
}