/// Marge 2 numbers in another integer.
/// Time 10-15 mins
#include<stdio.h>

int main()
{
    int n,m,rev=0;
    scanf("%d %d",&n,&m);
    while(m)
    {
        rev = rev*10;
        rev = rev + (m%10);
        m = m/10;
    }
    while(rev)
    {
        n = n*10;
        n = n + (rev%10);
        rev = rev/10;
    }
    printf("%d\n",n);

    return 0;
}
