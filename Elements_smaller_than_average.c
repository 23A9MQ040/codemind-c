#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i < a;i++){
        scanf("%d",&arr[i]);
    }
    int s = 0;
    for(int j = 0 ; j < a; j++){
        s+=arr[j];
    }
    int av = s/a;
    int c = 0;
    for(int k = 0 ; k < a;k ++)
    {
        if(arr[k]<=av){
            c++;
        }
    }
    printf("%d",c);
}