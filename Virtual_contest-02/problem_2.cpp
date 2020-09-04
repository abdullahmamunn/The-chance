#include<stdio.h>
#define a_size 100

int arr[a_size];
int main()
{
    int i,n,val,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&val);
        arr[val] = arr[val]+1;
    }
    for(i=0;i<100; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
