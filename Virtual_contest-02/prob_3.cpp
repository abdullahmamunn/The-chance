#include<stdio.h>
int main()
{
    long long int a_size,n,a=0,b=0,q,i;
    scanf("%lld",&a_size);
    long long int ar[a_size];
    long long int s[a_size];
    for(i=1;i<=a_size;i++)
    {
        scanf("%lld",&ar[i]);
    }
    s[0]=0;
    for(i=1;i<=a_size;i++)
    {
        s[i] = s[i-1]+ar[i];
    }
    scanf("%lld",&q);
    for(i=1;i<=q;i++)
    {
       scanf("%lld%lld",&a,&b);
       a++;
       b++;
       printf("%lld\n",s[b]-s[a-1]);
    }
    return 0;
}
