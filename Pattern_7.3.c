#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=a;i>0;i--)
    {
        for(int j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k=i;k>0;k--){
            printf("%d ",k);
        }
        printf("
");
    }
}