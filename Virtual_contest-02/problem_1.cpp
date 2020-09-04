#include<bits/stdc++.h>
using namespace std;
long int a[2000005],i,a_size,j;
int main()
{
    int temp=0;
    while(scanf("%d",&a_size))
    {
        if(a_size == 0)
            break;
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        sort(a,a+a_size);
        for(i=0;i<a_size;i++)
        {
            printf("%ld",a[i]);
            if(i<a_size-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
