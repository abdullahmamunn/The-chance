///Given an array. Insert a new value in a specific index and reorder the array again.
/// Time : 30 mins
#include<stdio.h>
int main()
{
    int a_size,index,value,i;
    while(scanf("%d",&a_size)!=EOF)
    {
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d %d",&index,&value);
        for(i=a_size-1;i>=index-1;i--)
        {
            a[i+1] = a[i];
        }
        a[index] = value;
        for(i=0;i<a_size+1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
}
