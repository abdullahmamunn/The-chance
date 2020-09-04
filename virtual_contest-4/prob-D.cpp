#include<stdio.h>
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        char str[n];
        scanf(" %[^\n]",str);
        for(int i=0;i<n;i++)
        {
            printf("%c",str[n-1]);
        }
        printf("\n");
    }
    return 0;
}
