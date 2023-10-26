#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    a = abs(a - b);
    int m = (a + 9)/10;
    printf("%d",m);
    
}