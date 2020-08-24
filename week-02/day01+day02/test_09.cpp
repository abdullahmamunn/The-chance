#include<stdio.h>
int main()
{
    int i,n,m,sum=0,mod,vag;
    while(scanf("%d",&n)!=EOF)
    {

           while(n !=0)
           {
                mod = n%10;
                sum = sum + mod;
                vag = n/10;
                n = vag;
           }

        printf("%d",sum);
        sum = 0;
    }
    return 0;
}

