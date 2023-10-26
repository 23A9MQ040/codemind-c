#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int c = 0;
    while(a >= 10){
        a -= 10;
        c++;
    }
    while(a >= 5){
        a -= 5;
        c++;
    }
    if(a == 0)
    printf("%d",c);
    else
    printf("-1");
}