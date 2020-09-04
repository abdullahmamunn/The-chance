#include<stdio.h>
int main()
{
    int A[5][5],B[5][5],i,j,sum=0,row,col;
    printf("Enter your row and column size not greater than 5\n");
    scanf("%d%d",&row,&col);
     printf("Enter the Matrix:\n");
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


    printf("\nAddition of Rows\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum  = sum+A[i][j];
        }
        printf("Sum of row %d is %d\n",i,sum);
        sum = 0;
    }

     printf("\nAddition of Columns\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum  = sum+A[j][i];
        }
        printf("Sum of row %d is %d\n",i,sum);
        sum = 0;
    }

    return 0;
}


