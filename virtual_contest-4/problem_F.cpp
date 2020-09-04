#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int a[26] = {0};
    for(int i=0;i<s.size();i++)
    {
        char x = tolower(s[i]);
        int  p = int(x);
        p = p - 97;
        a[p] += 1;
    }
    int flag = 1;
    for(int i = 0;i<26;i++)
    {
        if(a[i]==0)
            flag = 0;
    }
     if(flag=1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
