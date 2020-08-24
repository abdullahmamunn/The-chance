#include<stdio.h>
int main()
{
    int ar_size;
    while(scanf("%d",&ar_size)!=EOF)
    {
        int a[ar_size],i,search_item;
        for(i=0;i<ar_size;i++)
        {
            scanf("%d",&a[i]);
        }
        scanf("%d",&search_item);
        int cnt = 0;
        for(i=0;i<ar_size;i++)
        {
            if(a[i]==search_item)
            {
                cnt++;
            }
        }
        if(cnt>0)
            printf("the number is in the array.\n");
        else
            printf("the number is not in the array.\n");
        cnt = 0;
    }
    return 0;
}
