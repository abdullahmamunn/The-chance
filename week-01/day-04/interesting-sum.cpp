#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    /// a[0] = 1
    /// a[1] = 2
    /// a[2] = 3
    /// a[3] = 4
    /// a[4] = 5
    for(i=n-1;i>=0;i--)
    {
        printf("%d",a[i]);
        printf(" ");
        if(i>0)
            printf("+ ");
        /// 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55

    }
      printf("= %d",sum);
    return 0;
}
