#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a<c && a<d)
    {
        printf("%d\n",a);
    }
    else if(a>c && a<b && a<d)
    {
        printf("%d\n",a);
    }
    else if(a>d && a<c && a<b)
    {
        printf("%d\n",a);
    }
    else if(b>a && b<c && b<d)
    {
        printf("%d\n",b);
    }
    else if(b>c && b<a && b<d)
    {
        printf("%d\n",b);
    }
    else if(b>d && b<c && b<a)
    {
        printf("%d\n",b);
    }
    else if(c>b && c<a && c<d)
    {
        printf("%d\n",c);
    }
    else if(c>a && c<b && c<d)
    {
        printf("%d\n",c);
    }
    else if(c>d && c<a && c<b)
    {
        printf("%d\n",c);
    }
    else if(d>b && d<a && d<c)
    {
        printf("%d\n",d);
    }
    else if(d>c && d<a && d<b)
    {
        printf("%d\n",d);
    }
    else if(d>a && d<b && d<c)
    {
        printf("%d\n",d);
    }
    else
    {
        printf("There is no third largest number.\n");
    }

    return 0;
}
