#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    for(int i = 1;i<=t;i++){
        int a,j,s,c=0;
        scanf("%d",&a);
        for(j=1;j<=a/2;j++){
            s = j*j;
            if(s==a){
                c++;
            }
        }
        if(c==1)printf("True
");
        else printf("False
");
    }
}