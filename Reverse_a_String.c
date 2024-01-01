#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i = 0,l = strlen(a)-1,t;
    while(i<=l){
        t = a[i];
        a[i]=a[l];
        a[l]=t;
        i++;
        l--;
    }
    printf("%s",a);
    
}