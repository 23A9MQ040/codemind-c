#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int c=0;
    for(int i = a; i <= b; i++){
    if(i%2==0 && i%3==0){
        c++;
    }
    }
    printf("%d",c);
    
}