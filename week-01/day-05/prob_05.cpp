///How to reverse a string without using any function.
/// Time 5-6 mins
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len;
    while(scanf(" %[^\n]",str)!=EOF)
    {
        len = strlen(str);
        for(i=len-1;i>=0;i--)
        {
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
