#include<stdio.h>
int main()
{
    char a[100];
    int i;
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++){
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}
