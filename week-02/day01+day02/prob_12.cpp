#include<stdio.h>
int main()
{
    int a_size,i,j,cnt,tem;
    while(scanf("%d",&a_size)!=EOF)
    {
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        cnt= 0;
        for(i=0;i<a_size;i++)
        {
            for(j=0;j<a_size-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    tem = a[j];
                    a[j] = a[j+1];
                    a[j+1] = tem;
                    cnt++;
                }
            }
        }
        printf("Total cnt = %d",cnt);
        cnt =0;
    }
    return 0;
}
