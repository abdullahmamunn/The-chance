#include <stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf ("%d",&n);
        if(n>10)
        {
            printf("%d %d\n",n-10,10);
        }
        else
        {
            printf("0 %d\n",n);
        }
    }
    return 0;
}
