#include<stdio.h>
int main()
{
    long long int s,n,m;
    scanf("%lld%lld",&n,&s);
    m = s/n;
    if(s%n!=0)
    {
        m++;
    }
    printf("%lld\n",m);
    return 0;
}
