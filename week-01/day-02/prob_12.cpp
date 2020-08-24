/// Given a character C. Determine the character is an uppercase alphabet or lowercase alphabet or a digit.
/// time: 4-5 mins

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    //cin>>ch;
    while(scanf("%s",&ch)!=EOF){
        if(ch>='a' && ch<='z')
            printf("%c is lowercase alphabet\n",ch);
        else if(ch>='A' && ch<='Z')
            printf("%c is uppercase alphabet\n",ch);
        else if(ch>='0' && ch<='9')
            printf("%c is a digit\n",ch);
        else
            printf("%c is not an alphabet\n",ch);
    }
    return 0;
}
