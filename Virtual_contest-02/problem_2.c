#include<stdio.h>
#define a_size 100
#define range 100;
int arr[a_size];
int main()
{
    int i,n,val,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&val);
        arr[val] = arr[val]+1;
    };
    for(j=1;j<range; j++)
    {
        printf("%d ",arr[j]);
    }
    return 0;
}
