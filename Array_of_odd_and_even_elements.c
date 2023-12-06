#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i < a;i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0 ; j < a; j++){
        if(arr[j]%2!=0)
        printf("%d ",arr[j]);
    
    }
    for(int k = 0 ;k < a; k ++)
    {
        if(arr[k]%2==0)
        {
            printf("%d ",arr[k]);
        }
    }
    
}