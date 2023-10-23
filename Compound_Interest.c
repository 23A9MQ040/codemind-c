#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    float d = a*pow((1+b/100),c)-a;
    printf("%.2f",d);
    
}