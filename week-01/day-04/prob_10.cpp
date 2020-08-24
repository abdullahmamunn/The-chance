///Given an array. Remove a specific index element and reorder the array again.
/// Time : 30 mins
#include<stdio.h>
int main()
{
    int a_size,i,index;
    while(scanf("%d",&a_size)!=EOF)
    {
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&index);
        for(i=index;i<a_size-1;i++)
        {
            a[i] = a[i+1];
        }
        for(i=0;i<a_size-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
