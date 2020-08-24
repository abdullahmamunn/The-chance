/// Given N, find N!
/// time : 4-5 mins
#include<stdio.h>
int main()
{
    int n,i,sum=1;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=n;i>0;i--)
        {
            sum = sum *i;
        }
        printf("%d\n",sum);
        sum = 1;
    }
    return 0;
}
