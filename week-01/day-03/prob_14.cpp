/// Input an integer N, and reverse the integer N.
/// Time : 10+6 mins
#include<stdio.h>
int main()
{
    int n,rev=0;
    while(scanf("%d",&n)!=EOF)
    {
        while(n!=0)
        {
            rev = rev*10;
            rev = rev + n%10;
            n = n/10;
        }
        printf("%d\n",rev);
        rev = 0;
    }
    return 0;
}
