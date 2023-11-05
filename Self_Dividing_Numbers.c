#include<stdio.h>
int main()
{
    int a,b,c=0,i;
    scanf("%d %d",&a,&b);
    for(i = a; i<=b; i++)
    {
        int d = i,v=0;
        while(d){
            v = d%10;
            if(v==0){
                c = 0;
                break;
            }
            if(i%v!=0){
                c=0;
                break;
            }
            if(i%v==0){
                c=1;
            }
            d /= 10;
        }
        if(c == 1)
        printf("%d ",i);
    }
}