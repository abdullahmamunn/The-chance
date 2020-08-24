///Given base B and power P. Find the B^p
/// Time: 5-7 mins

#include<stdio.h>
int main()
{
    int b,p,i,temp = 1;
    while(scanf("%d%d",&b,&p)!=EOF)
    {
        for(i=1;i<=p;i++)
        {
           temp = temp*b;
        }
        printf("%d\n",temp);
        temp = 1;
    }
    return 0;
}
