#include<stdio.h>

int main()
{
    char ch;
    long long int A[101][101],i,j,n,c=1,flag=0;
    int t,tc=0;
    scanf("%d",&t);
    while(t--)
    {
        flag = 0;
        printf("N = ");
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%lld",&A[i][j]);
                if(A[i][j]<0)
                    flag = 1;
            }
        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               if(A[i][j]!=A[n-1-i][n-1-j])
                flag = 1;
            }
        }

        if(flag)
            printf("Test #%d: Non-symmetric.\n",++tc);
        else
            printf("Test #%d: Symmetric.\n",++tc);
    }
    return 0;

}
