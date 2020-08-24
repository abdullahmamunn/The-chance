///Count how many words are in the given input.
///Time: 10 mins
#include<stdio.h>
#include<string.h>
int main()
{
   char str[100];

   gets(str);
   int i,len,space_count=0;
   len = strlen(str);
   for(i=0;i<len;i++)
   {
       if(str[i+1] == ' ' && str[i] != '\0')
       {
           space_count++;
       }
   }
    printf("%d\n",space_count+1);

}
