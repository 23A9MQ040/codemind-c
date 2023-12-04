#include<stdio.h>
int main()
{
    int a,r,c=0,co=0;
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        if(r%2==0)
        {
            co++;
        }
        a/=10;
        c++;
    }
    if(co==c)
    printf("Even");
    else if(co<c&&co!=0)
    printf("Mixed");
    else
    printf("Odd");
}