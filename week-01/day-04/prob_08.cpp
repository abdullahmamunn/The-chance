///Write a program in C to find the maximum and minimum elements in an array.
///Time:20 mins
#include<stdio.h>
int main()
{
    int a_size,i,minimun_num=0,maximum_num=0;
    while(scanf("%d",&a_size)!=EOF)
    {
        int a[a_size];
        for(i=0;i<a_size;i++)
        {
            scanf("%d",&a[i]);
        }
        minimun_num = a[0];
        maximum_num = a[0];

        for(i=1;i<a_size;i++)
        {
            if(a[i]>maximum_num)
            {
                maximum_num = a[i];
            }
            if(a[i]<minimun_num)
            {
                minimun_num = a[i];
            }
        }
        printf("%d\n%d\n",maximum_num,minimun_num);
    }
    return 0;
}
