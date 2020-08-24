///Find the sum of digits of a number N. Example 1895 = 1+8+9+5 = 23
/// time : 7 mins
#include<stdio.h>
int main()
{
    int n,mod,sum = 0;
    while(scanf("%d",&n)!=EOF)
    {
        while(n!=0)
        {
            mod = n%10;
            sum = sum+mod;
            n=n/10;
        }
        printf("%d\n",sum);
        sum = 0;
    }
}
