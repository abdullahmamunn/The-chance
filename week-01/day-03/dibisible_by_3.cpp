/// Given a number N, Find the smallest number which is divisible by 3 and greater than N.
/*If N=8 then the corresponding output is: 9 because 9 is the first number after 8 which is divisible by 3.

    Test Case For Problem 16:
    Input_1:
    9
    Output_1:
    12
 */
/// Time : 45
#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        while(1)
        {
            n++;
            if(n%3==0)
            {
                printf("%d\n",n);
                break;
            }
        }
    }
    return 0;
}
