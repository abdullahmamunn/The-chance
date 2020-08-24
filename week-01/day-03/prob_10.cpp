/// problem number :04 find B^p
#include <stdio.h>
int main()
{
    int b,p,temp = 1,i;
    while(scanf("%d%d",&b,&p)!=EOF)
    {
        i = 1;
        while(i<=p)
        {
            temp = temp * b;
            i++;
        }
        printf("%d\n",temp);
        temp = 1;
    }
    return 0;
}
