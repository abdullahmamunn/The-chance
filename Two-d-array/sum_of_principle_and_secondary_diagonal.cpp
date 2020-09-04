/*
   sum  of principle diagonal is
   lets you have n*n matrix,

   1 2 3 4
   5 6 7 8
   9 9 8 7
   6 5 4 2

   here, [0,0] = 1, [1,1] = 6, [2,2] = 8,[3,3] = 2
   sum of this index is = [0,0]+[1,1]+[2,2]+[3,3] = 17 called
   primary diagonal.

   and secondary diagonal is,sum of this index is = [0,3]+[1,2]+[2,1]+[3,0] = (4+7+9+6) = 26

*/
#include<stdio.h>
#define n 10

int A[n][n];
int main()
{
    int i,j,a_size,sum=0;
    printf("Enter your array size no greater than 10: ");
    scanf("%d",&a_size);
    for(i=0;i<a_size;i++)
    {
        for(j=0;j<a_size;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nHere is Our matrix\n");
    for(i=0;i<a_size;i++)
    {
        for(j=0;j<a_size;j++)
        {
             printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\nThe matrix with position and value: ");
    printf("\n");
    for(i=0;i<a_size;i++)
    {
        for(j=0;j<a_size;j++)
        {
            printf("[%d][%d] = %d ",i,j,A[i][j]);

        }
        printf("\n");
    }
    printf("\nPrinciple Diagonal is:");
    for(i=0;i<a_size;i++)
    {
        for(j=0;j<a_size;j++)
        {
            if(i==j)
            {
                printf("\n[%d][%d] = %d ",i,j,A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nSum of principle diagonal is = %d",sum);
    sum = 0;

    printf("\n");
    printf("\nSecondary diagonal is");
    for(i=0;i<a_size;i++)
    {
        for(j=0;j<a_size;j++)
        {
            if(i+j == a_size-1)
            {
                printf("\n[%d][%d] = %d",i,j,A[i][j]);
                sum = sum + A[i][j];
            }
        }
    }
    printf("\nSum of Secondary diagonal is = %d",sum);
    printf("\n\n");
    return 0;
}
