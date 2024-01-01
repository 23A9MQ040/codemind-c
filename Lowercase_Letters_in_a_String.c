#include<stdio.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,l=0;
    for(i = 0;a[i]!=NULL;i++)
    {
        if(a[i]>='a'&&a[i]<='z'){
            l=l+1;
        }
    }
    printf("%d",l);
}