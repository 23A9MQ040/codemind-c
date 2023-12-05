#include<stdio.h>
int main()
{
    int a,c;
    scanf("%d",&a);
    int arr[a];
    for(int i = 0 ; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&c);
    int s = 0;
    for(int k = 0; k < a; k++)
    {
        if(arr[k]==c)
        {
            s=1;
            break;
        }
    }
    if(s)
    printf("True");
    else
    printf("False");
}