/// Find factorial N!
#include<stdio.h>
int main()
{
    int n,i,fact = 1;
    while(scanf("%d",&n)!=EOF)
    {
        i = n;
        while(i>=1)
        {
            fact = fact*i;
            i--;
        }
        printf("%d\n",fact);
        fact = 1;
    }
    return 0;
}
