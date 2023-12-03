#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,k;
        scanf("%d %d  %d%d",&n,&a,&b,&k);
        int v=0;
        int f=0;
        for(int i = 1; i<=n ;i++)
        {
            if(i%b==0&&i%a!=0)
            {
                v++;
            }
            else if(i%a==0&&i%b!=0)
            {
                f++;
            }
            if(v>=k||f>=k)
            {
                printf("Win
");
                break;
              }
        }
        if(v<k&&f<k)
        {
            printf("Lose
");
        
        }
    }
}