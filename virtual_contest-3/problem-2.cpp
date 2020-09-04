#include<stdio.h>
int ar[1000][1000];
int main()
{
    int n,i,j; ///row=column = n
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int m=n;
    int r=0;
    while(r<=(n/2))
    {
        for(i=r;i<m;i++)//From left to right
        printf("%d ",ar[r][i]);

        for(i=r+1;i<m;i++)//From top to bottom
        printf("%d ",ar[i][m-1]);

        for(i=m-2;i>=r;i--)//From right to left
        printf("%d ",ar[m-1][i]);

        for(i=m-2;i>r;i--)//From bottom to top
        printf("%d ",ar[i][r]);

        r++;
        m--;
}

    return 0;
}
