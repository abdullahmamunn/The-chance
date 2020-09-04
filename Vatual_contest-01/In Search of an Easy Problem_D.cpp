#include<stdio.h>
int main()
{
    int n,num;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&num);
        if(num == 1)
        {
            printf("HARD\n");
            return 0;
        }
    }
    printf("EASY\n");
    return 0;
}
