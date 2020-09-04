#include<stdio.h>
int main()
{
    int A[5][5],B[5][5],i,j,sum=0,row,col;
    printf("Enter your row and column size not greater than 5\n");
    scanf("%d%d",&row,&col);
     printf("Enter the First Matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }

    printf("Matrix A is \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


    printf("Addition of \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0)
             {
                 printf("%d ",A[i][j]);
                 //sum[i][j]=A[i][j] + B[i][j];
             }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0)
             {
                sum = sum+A[i][j];
             }
        }
    }

    printf("is %d",sum);

    return 0;
}

