///Input a string and print how many vowels and consonants are there.
/// Time : 6-7 mins
#include<stdio.h>
int main()
{
    char str[100];
    int total_vowel = 0, total_consonant = 0,i;
    while(scanf(" %[^\n]",str)!=EOF)
    {
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z')
            {
                if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || str[i] == 'u' || str[i] == 'U')
                {
                    total_vowel++;
                }
                else
                {
                    total_consonant++;
                }
            }
        }
       printf("Vowels : %d\nConsonants : %d\n",total_vowel,total_consonant);
       total_vowel = 0;
       total_consonant = 0;
    }
}
