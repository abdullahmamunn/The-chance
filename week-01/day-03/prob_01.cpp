/// Input an integer N. print N, N-1, ........3,2,1
/// time : 2 mins
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        printf("%d ",i);
    }
    return 0;
}
