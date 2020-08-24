/* Write a program in C to separate odd and even integers in separate arrays. Print the array with odd and even sum. */
/// Time = 25-30 mins
#include<stdio.h>
int main()
{
    int arr_size;
    while(scanf("%d",&arr_size)!=EOF)
    {
        int a[arr_size],even[arr_size],odd[arr_size],i;
        int even_sum = 0, odd_sum=0,j=0,k=0;
        for(i=0;i<arr_size;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]%2==0)
            {
               even[j++] = a[i];
               even_sum +=a[i];
            }
            else
            {
                odd[k++] = a[i];
                odd_sum +=a[i];
            }
        }
        for(i=0;i<j;i++)
        {
            printf("%d ",even[i]);
        }
        printf("\n%d\n",even_sum);

        for(i=0;i<k;i++)
        {
            printf("%d ",odd[i]);
        }
        printf("\n%d\n",odd_sum);
       even_sum = 0;
       odd_sum = 0;

    }
    return 0;
}
