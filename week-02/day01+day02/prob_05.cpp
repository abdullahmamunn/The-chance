/*
5.Input a value N and print N lines in following way.
Example: If N=4 then,
The corresponding output is,

 ****
  ***
   **
    *

*/
#include<stdio.h>
int main()
{
    int i,j,N;
    while(scanf("%d",&N)!=EOF){
        for(i=0;i<N;i++)
        {
            for(j=0;j<=i-1;j++)
            {
                printf(" ");
            }
            for(j=N-i;j>0;j--)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}
