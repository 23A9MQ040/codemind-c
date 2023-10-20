#include<stdio.h>
int main()
{
    int a,sum=0;
    scanf("%d",&a);
    if(a<1||a>10000){
        printf("0");
    
    }
    for(int i = 1; i < a; i++) {
        if(a%i==0){
            sum +=i;
        }
    }
    printf("%d",sum);
    return 0;
}