///Write a program in C to separate the individual characters from a string.
/// Time : 3-4 mins
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    while(scanf(" %[^\n]",str)!=EOF){
        for(i=0;str[i]!='\0';i++)
        {
            printf("%c ",str[i]);
        }
        printf("\n");
    }
    return 0;
}

