///Input a string that will contain only uppercase letters. Convert these letters in lowercase.
/// Time: 5-6 mins
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    while(scanf(" %[A-Z]",str)!=EOF)
    {
        for(i=0;str[i]!='\0';i++)
        {
            str[i] = str[i]+32;
            printf("%c",str[i]);
        }
        printf("\n");
    }
    return 0;
}
