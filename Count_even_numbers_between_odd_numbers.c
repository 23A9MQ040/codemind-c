#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a];
    for(int i = 1; i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c = 0;
    for(int j =0;j <=a-2;j++)
    {
        if(arr[j-1]%2!=0 && arr[j+1]%2!=0 && arr[j]%2==0)
        {
            c++;
        }
    }
    printf("%d
",c);
}