#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int n = 1;
    for(int i = 1; i < a;i++){
        if(n == 0){
            n = 1;
        }
        else if(n == 1){
            n = 2;
        }
        else if(n == 2){
            n = 0;
        }
    }
    if(n == 0){
        printf("NORMAL");
    }
    else if(n == 1){
    printf("HUGE");
    }
    else
    printf("SMALL");
}