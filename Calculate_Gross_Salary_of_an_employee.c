#include<stdio.h>
int main()
{
    float a,b,c; 
    scanf("%f%f%f",&a,&b,&c);
    float d = a*0.12; 
    float e = a+b+c+d;
    printf("%.2f
",d);
    printf("%.2f",e);
}