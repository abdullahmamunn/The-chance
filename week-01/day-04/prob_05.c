///Write a program in C to merge two arrays.
///Time: 35 mins
#include<stdio.h>
int main()
{
    int arr1[50],arr2[50],size1,size2,i,k,merge[100];
    scanf("%d",&size1);
    for(i=0; i<size1; i++)
    {
        scanf("%d",&arr1[i]);
        merge[i] = arr1[i];
    }
    k = i;
    scanf("%d",&size2);
    for(i=0; i<size2; i++)
    {
        scanf("%d",&arr2[i]);
        merge[k] = arr2[i];
        k++;
    }
    for(i=0; i<k; i++)
        printf("%d ",merge[i]);
    return 0;
}
