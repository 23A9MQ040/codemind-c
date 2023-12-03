#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int c=0;
        for(int i = a;i<=b;i++)
        {
            int l = i%10;
            if(l==2||l==3||l==9)
            {
                c++;
            }
            
        }
        printf("%d
",c);
    }
}