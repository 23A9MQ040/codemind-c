#include<stdio.h>
#include<string.h>
int main()
{
    char a1[1000],a2[1000];
    scanf("%[^
]s",a1);
    strcpy(a2,a1);
    int i=0,l=strlen(a1)-1,t;
    while(i<=l)
    {
        t=a1[i];
        a1[i]=a1[l];
        a1[l]=t;
        i++;
        l--;
    }
    if(strcmp(a1,a2)==0){
        printf("Palindrome");
    }
    else printf("Not Palindrome");
}