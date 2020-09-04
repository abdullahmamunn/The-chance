/// Take an input N. In the next line input N integers. Print this N integers in separate lines.
/// Time: 3-4 mins
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
