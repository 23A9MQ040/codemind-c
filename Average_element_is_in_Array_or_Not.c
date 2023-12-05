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
    for(int j = 0 ; j < a; j++)
    {
        m += arr[j];
    }
    float b = m/a;
    int c = (int)b;
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