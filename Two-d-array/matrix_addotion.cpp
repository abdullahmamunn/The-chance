#include<stdio.h>
int main()
{
    int A[5][5],B[5][5],i,j,sum[5][5],row,col;
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

    printf("Enter the second Matrix:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }

    printf("Matrix B is\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }

    printf("Addition of [A]+[B] is: \n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==0)
             {
                 sum[i][j]=A[i][j] + B[i][j];
             }
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("%d ",sum[i][j]);
        }
        printf("\n");
    }


    return 0;
}
