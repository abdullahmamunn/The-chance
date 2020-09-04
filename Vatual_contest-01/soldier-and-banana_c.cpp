#include<stdio.h>
int main()
{
    int k,n,w,i,sum=0,total_cost;
    scanf("%d%d%d",&k,&n,&w);
    for(i=1;i<=w;i++)
    {
        sum = sum + i;
    }
    total_cost = sum*k;
    if(total_cost>n)
        printf("%d\n",total_cost-n);
    else
        printf("0\n");
    return 0;
}
