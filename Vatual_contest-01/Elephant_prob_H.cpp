#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x%5!=0)
    {
        y = (x/5)+1;
    }
    else
    {
        y = x/5;
    }
    printf("%d\n",y);

    return 0;
}
