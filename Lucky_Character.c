#include<stdio.h>
char aiml(char *s){
    int lucky = 7;
    int lulet=(lucky - 1)%10;
    return s[lulet];
}
int main()
{
    char l[10];
    scanf("%s",l);
    printf("%c",aiml(l));
}