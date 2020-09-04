/// Given N. Find the "Namta" of N.
/// Time : 3 mins
#include <stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d X %d = %d\n",n,i,n*i);
        }
        printf("\n");
    }
    return 0;
}
