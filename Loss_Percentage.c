#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float c = a-b;
    printf("%.2f",(c/a)*100);
}