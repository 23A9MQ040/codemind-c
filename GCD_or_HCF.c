#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int i,m,p;
    for( i = 1; i <= b; i++)
    {
        m = a*i;
        if(m%b==0){
        printf("%d",(a*b)/m);
        break;
        }
    }
    
}