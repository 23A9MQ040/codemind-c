#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i = 2*a; i >= 2; i -= 2){
        printf("%d ",i);
    }
}