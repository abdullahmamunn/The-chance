///Write a program to copy an array into another array and print both array. (the size of the array should be taken from keyboard).
/// Time: 6-7 mins
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    for(j=0;j<n;j++)
    {
        b[j] = a[j];
        printf("%d ",b[j]);
    }
    return 0;
}
