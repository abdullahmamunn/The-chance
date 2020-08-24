///Input a word and copy it in another string.
/// 4-5 mins
#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    char c[100];
    while(scanf(" %[^\n]",s)!=EOF)
    {
        strcpy(c,s);
        printf("%s\n",c);
    }
    return 0;
}
