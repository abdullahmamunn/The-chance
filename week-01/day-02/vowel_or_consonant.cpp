///Given a character C. Determine the character is a vowel or consonant.
/// time : 3-4 mins

#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
        printf("%c is vowel\n",ch);
    else
        printf("%c is consonant\n",ch);
    return 0;
}

