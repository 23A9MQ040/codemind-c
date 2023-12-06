#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0; i < a;i ++)
    {
        scanf("%d",&arr[i]);
    }
    int e = 1;
    for(int j = 0 ; j < a; j++)
    {
        if(arr[j]%2!=0)
        {
            e = 0;
            break;
        }
    }
    printf("%s",e?"True":"False");
}