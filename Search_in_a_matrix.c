#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(int i = 0;i < r;i++){
        for(int j = 0  ; j < c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int b;
    scanf("%d",&b);
    int m = 0;
 for(int i = 0;i < r;i++){
        for(int j = 0  ; j < c;j++){
            if(b==a[i][j]){
            m = 1;
            }
        }
    }
    printf("%d",m);
}