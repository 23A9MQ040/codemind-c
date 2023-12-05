#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i < a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int s=0;
    int c=0;
    for(int j = 0 ; j < a;j++)
    {
        if(arr[j]%2==0)
        {
            s+=arr[j];
        }
        else
        {
            c+=arr[j];
        }
    }
    int d = abs(s-c);
    printf("%d",d);
}