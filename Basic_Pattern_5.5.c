#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i = 1; i <= a; i++)
    {
        for(int j = a-i; j>0;j--)
        {
            printf("*");
        }
        for(int k = 1;k <= i;k++)
        {
                printf("%d",i);
        }
        
        printf("
");
        
    }
}