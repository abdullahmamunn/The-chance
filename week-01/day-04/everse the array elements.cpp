///Given a list of numbers. Save the numbers in an Array. Finally, reverse the array elements and output in a line separated by space.
/// Time: 6-7 mins
#include<stdio.h>

int main()
{
    int a_size;
    scanf("%d",&a_size);
    int arr[a_size];
    for(int i=0;i<a_size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0,j=a_size-1;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<a_size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    return 0;
}
