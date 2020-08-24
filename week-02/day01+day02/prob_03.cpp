/* 1.Input N and M. Print N lines where every line contains M stars.
    Example: If N=3 and M=5 then,*/
///Time:
#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
