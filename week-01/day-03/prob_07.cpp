/// problem :01
#include<stdio.h>
int main()
{
    int i,n;
    while(scanf("%d",&n)!=EOF)
    {
        i = n;
        while(i>0)
        {
            printf("%d ",i);
            i--;
        }
        printf("\n");
    }
    return 0;
}
