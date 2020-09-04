#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int a[26] = {0};
    for(int i=0; s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            char c = tolower(s[i]);
            int index = c - 'a';
            a[index] = a[index] + 1;
        }
    }
    int flag = 1;
    for(int i = 0;i<26;i++)
    {
        if(a[i]==0)
            flag = 0;
    }
     if(flag==1)
            printf("pangram\n");
        else
            printf("not pangram\n");
    return 0;
}

