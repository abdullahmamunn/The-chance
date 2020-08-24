/// sum odd numbrs 1 to n
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    while(scanf("%d",&n)!=EOF)
    {
        i=1;
        while(i<=n)
        {
           if(i%2==1)
           {
               sum = sum + i;
           }
           i++;
        }
        printf("%d\n",sum);
        sum  = 0;
    }
}
