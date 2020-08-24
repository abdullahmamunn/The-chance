///Input a word and count its length without using built-in library.
/// time : 3-4 mins
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    while(scanf(" %[^\n]",str)!=EOF){
        for(i=0;str[i]!='\0';i++);
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
