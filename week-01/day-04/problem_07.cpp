///Write a program to find whether a number is there in an array or not.
///Time: 10-15 mins
#include<stdio.h>
int search_item(int a[],int item,int a_size)
{
    int i;
    for(i=0;i<a_size;i++)
    {
        if(a[i] == item)
        {
            return 1;
        }
    }
    return -1;
}
int main()
{
    int ar_size,item,i;
    while(scanf("%d",&ar_size)!=EOF)
    {
        int arra[ar_size];
        for(i=0;i<ar_size;i++)
        {
            scanf("%d",&arra[i]);
        }
        scanf("%d",&item);
        if(search_item(arra,item,ar_size)==1)
            printf("the number is in the array.\n");
        else
            printf("the number is not in the array.\n");
    }
    return 0;
}
