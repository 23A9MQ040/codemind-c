#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i < a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int l=-1;
    for(int j = a-1 ; j >=0;j--)
    {
        if(arr[j]%2==0)
        {
            l=j;
            break;
        }
            
    }
    printf("%d",l);
}