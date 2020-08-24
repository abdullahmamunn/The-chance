/// Input an integer N, print the following series 1-2+3-4+5-6+7-8+....+N
/// Time : valoi time lagche :p
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                sum = sum-i;
            }
            else
            {
                sum = sum + i;
            }
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
