#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a_size,i;
    int ar[4]={10,4,5,6};
    int sum[4];


    for(i=0;i<4;i++)
    {
        printf("%d ",ar[i]);
    }
    sum[0] = ar[0];
    for(i=0;i<4;i++)
    {
        sum[i] = sum[i-1] + ar[i];
    }
    for(i=0;i<4;i++)
    {
       printf("%d ",sum[i]);
    }

    return 0;

}
