#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int d = c * b; 
    if(a <= d)
    printf("YES");
    else
    printf("NO");
    
}