/// Print Namta using while loop
#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        i = 1;
        while(i<=10)
        {
            printf("%d X %d = %d\n",n,i,n*i);
            i++;
        }
        printf("\n");
    }
    return 0;
}
