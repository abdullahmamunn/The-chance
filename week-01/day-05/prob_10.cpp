///Input a string and print how many alphabets, digit, and special characters are there.
/// Time : 6-7 mins
#include<stdio.h>
int main()
{
    char str[100];
    int alphabet=0,digit=0,special_char = 0,i;
    while(scanf(" %[^\n]",str)!=EOF)
    {
       for(i=0;str[i]!='\0';i++)
       {
            if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            {
                alphabet++;
            }
            else if(str[i]>='0' && str[i]<='9')
            {
                digit++;
            }
            else
            {
                special_char++;
            }
       }
       printf("Alphabet : %d\nDigit : %d\nSpecial: %d\n",alphabet,digit,special_char);
       alphabet = 0;
       digit = 0;
       special_char = 0;

    }
    return 0;
}
