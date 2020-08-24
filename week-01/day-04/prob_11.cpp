///Write a program that calculates the summation of all rich numbers of an array. A rich number is a number that is greater than all the previous elements.
/// Time : 15-20 mins
#include<stdio.h>
int main()
{
    int a_size,i;
    while(scanf("%d",&a_size)!=EOF)
    {
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        int sum = a[0];
        for(i=0;i<a_size-1;i++)
        {
            if(a[i+1]>a[i])
            {
                sum = sum + a[i+1];
            }
        }
        printf("%d\n",sum);
        sum = 0;
    }
    return 0;
}
