///Input two words and check both words are the same or not.
/// Time : 4-5 mins
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char str2[100];
    int i;
    while(scanf(" %[^\n] %[^\n]",str,str2)!=EOF)
    {
        if(strcmp(str,str2)==0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
