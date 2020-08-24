/// Given a number N, Find the smallest number which is divisible by 3 and greater than N.
/// Time : 45
#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        while(1)
        {
                n++;
                if(n%3==0)
                {
                    printf("%d\n",n);
                    break;
                }
        }
    }
    return 0;
}
