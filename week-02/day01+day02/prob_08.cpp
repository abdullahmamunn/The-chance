#include<stdio.h>
int main()
{
    int a_size,i,j;
    while(scanf("%d",&a_size)!=EOF){
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<a_size;i++)
        {
            for(j=0;j<a_size;j++)
            {
                printf("%d %d, ",a[i],a[j]);
            }
        }
        printf("\n");
    }
    return 0;
}
