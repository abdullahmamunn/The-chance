/*Input a value N and print N lines in following way.
Example: If N=4 then,
The corresponding output is,

       *
     * * *
   * * * * *
 * * * * * * *

*/
#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=N-1;i>=0;i--) //i=4-1=3
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<N-i;j++)
        {
            printf("*");
        }
        for(j=0;j<N-i-1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


