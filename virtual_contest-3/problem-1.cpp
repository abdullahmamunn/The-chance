#include<stdio.h>
int main()
{
    int A[105][105],n,i,j,ai,aj,c,r;
    while(scanf("%d",&n)==1 &&n){
    c=0;
    r=0;
    int row[100] = {0};
    int col[100] = {0};
    for(i=0;i<n;i++)
    {
        row[i] = 0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            row[i] += A[i][j];
            col[j] += A[i][j];

        }
    }

    for(i=0;i<n;i++)
		{
			if(row[i]%2==1)
			{
				r++;
				ai = i;
			}
			if(col[i]%2==1)
			{
				aj = i;
				c++;
			}
		}
		if(r==0&&c==0)
		{
			printf("OK\n");
			continue;
		}
		if(r==1&&c==1)
		{
			printf("Change bit (%d,%d)\n",ai+1,aj+1);
			continue;
		}
		printf("Corrupt\n");
    }
    return 0;
}



