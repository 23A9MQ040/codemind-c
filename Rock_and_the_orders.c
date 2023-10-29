#include<stdio.h>
int main()
{
    int D,C;
    scanf("%d%d",&D,&C);
    int A1,A2,A3;
    scanf("%d%d%d",&A1,&A2,&A3);
    int B1,B2,B3;
    scanf("%d%d%d",&B1,&B2,&B3);
    int t1=A1+A2+A3;
    int t2=B1+B2+B3;
    int s2 = t1 + t2 + (2*D);
    if(t1<150 && t1<150)
    {
        if(s2 > C+s2)
        printf("YES");
        else
        printf("NO");
    }
    else if(t1>=150&&t2>=150)
    {
        if(s2>s2+C-D-D)
        printf("YES");
        else
        printf("NO");
    }
    else if(t1>=150&&t2<150||t1<150 && t2>=150)
    {
        if(s2>s2+C-D)
        printf("YES");
        else
        printf("NO");
    }

}