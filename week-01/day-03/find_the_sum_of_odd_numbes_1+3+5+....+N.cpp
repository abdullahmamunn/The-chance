/// Input an integer N, find the sum of odd numbers 1 to N, 1+3+5+....+N.
/// Time 3-4 mins
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    while(scanf("%d",&n)!=EOF){
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            sum = sum + i;
        }
    }
    printf("%d\n",sum);
    sum = 0;
    }
    return 0;
}
