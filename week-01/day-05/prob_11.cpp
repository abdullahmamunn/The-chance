///Check a string is palindrome or not.
/// Time: 30 mins

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,len;
    while(scanf(" %[^\n]",str)!=EOF)
    {
        int cnt=0;
        len = strlen(str);
        for(i=0;i<=len/2;i++)
        {
            if(str[i] == str[len-i-1])
             cnt++;
        }
            if(cnt == i)
                printf("Yes it's palindrome.\n");
            else
                printf("Not a palindrome.\n");

    }
    return 0;
}
