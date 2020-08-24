#include<stdio.h>
int main()
{
    int i,n,m,sum=0,mod,vag;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
        for(i=n;i<=m;i++)
        {
          int temp = i;
           while(temp !=0)
           {
                mod = temp%10;
                sum = sum + mod;
                vag = temp/10;
                temp = vag;
           }
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
