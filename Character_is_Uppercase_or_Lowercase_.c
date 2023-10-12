#include<stdio.h>
int main()
{
    char cs;
    scanf("%c",&cs);
    if(cs >= 'A' && cs <= 'Z')
    printf("uppercase alphabet");
    else if(cs >= 'a' && cs <= 'z')
    printf("lowercase alphabet");
    else
    printf("not an alphabet");
}