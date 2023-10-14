#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    float t,sum=0;
    if(a<=199)
    t = a*1.20;
    else if(a>=200 && a<400)
    t = a*1.50;
    else if(a>=400 && a<600)
    t = a*1.80;
    else
    t = a*2.00;
    if(t>400)
    sum = 0.15*t;
    else if(t<400)
    sum = 100;
    t += sum;
    printf("%.2f",t);
    return 0;
    
}