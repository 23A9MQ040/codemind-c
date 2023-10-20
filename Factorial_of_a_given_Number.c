#include<stdio.h>
int main()
{
    int a;
    long long f = 1;
    scanf("%d",&a);
    if(a<0)
    printf("0");
    for(int i = 1; i <= a; i++){
        f *= i;
    }
    printf("%d",f);
}