#include<stdio.h>
int main()
{
    int a1=0;
    int a2=1;
    int ne;
    int a;
    int i;
    scanf("%d",&a);
    printf("%d %d ",a1,a2);
    for( i = 2 ; i < a; i++)
    {
            ne = a1+a2;
            printf("%d ",ne);
            a1=a2;
            a2=ne;
    }
   return 0; 
}