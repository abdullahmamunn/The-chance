
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    while(scanf(" %[^\n]",str)!=EOF)
    {
        int i,j,len,cnt=0,maxi=0;
        len = strlen(str);
        for(i=0;i<len-1;i++)
        {
            for(j=0;j<len-1;j++)
            {
                if(str[i] == str[j])
                   {
                        cnt++;
                   }
            }

        }
       printf("%d",cnt);
    }
    return 0;
}
