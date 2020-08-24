#include<stdio.h>
int main()
{
    int a_size,i,j,temp;
    while(scanf("%d",&a_size)!=EOF)
    {
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<a_size;i++)
        {
            for(j=0;j<a_size-i-1;j++)
            {
                if(a[j+1]>a[j])
                {
                    temp = a[j+1];
                    a[j+1] = a[j];
                    a[j] = temp;
                }
            }
        }
        for(i=0;i<a_size;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
