#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    int m = 0;
    for(int j = 1 ; j < a; j+=2)
    {
        m += arr[j];
    }
    printf("%d",m);
}