///Given N, find  X and A  where N = X*2^A.
/// Time : 50-55 mins
#include<stdio.h>
int main()
{
    int N,cnt=0,x=0;
    while(scanf("%d",&N)!=EOF)
    {
        while(N%2==0)
        {
            //x = N%2==0;
            N = N/2;
            x = N;
            cnt++;
        }
        printf("%d %d\n",x,cnt);
        cnt=0;
    }
}
